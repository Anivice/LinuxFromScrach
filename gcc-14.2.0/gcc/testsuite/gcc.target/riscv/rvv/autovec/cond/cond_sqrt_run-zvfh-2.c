/* { dg-do run { target { riscv_zvfh } } } */
/* { dg-additional-options "-mrvv-vector-bits=scalable -fno-vect-cost-model -ffast-math" } */

#include "cond_sqrt-zvfh-2.c"

#define N 99

#define EPS 1e-2

#define TEST_LOOP(TYPE, OP)                                                    \
  {                                                                            \
    TYPE r[N], a[N], b[N], pred[N];                                            \
    for (int i = 0; i < N; ++i)                                                \
      {                                                                        \
	a[i] = (i & 1 ? i : 3 * i) * (i % 3 == 0 ? 1 : 2);                     \
	b[i] = (i % 9) * (i % 7 + 1);                                          \
	pred[i] = (i % 7 < 4);                                                 \
	asm volatile ("" ::: "memory");                                        \
      }                                                                        \
    test_##TYPE##_##OP (r, a, b, pred, N);                                     \
    for (int i = 0; i < N; ++i)                                                \
      {                                                                        \
	float ref = pred[i] ? __builtin_sqrtf (a[i]) : b[i];                   \
	if (__builtin_fabsf (r[i] - ref) > EPS)                                \
	  __builtin_abort ();                                                  \
      }                                                                        \
  }

int
main ()
{
  TEST_ALL (TEST_LOOP)
  return 0;
}
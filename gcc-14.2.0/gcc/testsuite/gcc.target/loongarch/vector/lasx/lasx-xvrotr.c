/* { dg-options "-mlasx -w -fno-strict-aliasing" } */
#include "../simd_correctness_check.h"
#include <lasxintrin.h>

int
main ()
{
  __m256i __m256i_op0, __m256i_op1, __m256i_op2, __m256i_out, __m256i_result;
  __m256 __m256_op0, __m256_op1, __m256_op2, __m256_out, __m256_result;
  __m256d __m256d_op0, __m256d_op1, __m256d_op2, __m256d_out, __m256d_result;

  int int_op0, int_op1, int_op2, int_out, int_result, i = 1, fail;
  long int long_op0, long_op1, long_op2, lont_out, lont_result;
  long int long_int_out, long_int_result;
  unsigned int unsigned_int_out, unsigned_int_result;
  unsigned long int unsigned_long_int_out, unsigned_long_int_result;

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvrotr_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x7fff7fff7fff7fff;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x7fff7fff7fff7fff;
  *((unsigned long *)&__m256i_op1[3]) = 0xffffffff0001ff02;
  *((unsigned long *)&__m256i_op1[2]) = 0xffffffff020afefc;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x000000000003fefd;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0xfffefffefff7fff7;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x7fff7ffffffbfffb;
  __m256i_out = __lasx_xvrotr_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xffffffff0001ff02;
  *((unsigned long *)&__m256i_op0[2]) = 0xffffffff020afefc;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x000000000003fefd;
  *((unsigned long *)&__m256i_op1[3]) = 0x000000000000ffff;
  *((unsigned long *)&__m256i_op1[2]) = 0x0209fefb08140000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0003fffc00060000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffff0001ff04;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffff02a0fefc;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x00000000000cfefd;
  __m256i_out = __lasx_xvrotr_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x00ff00ff00000007;
  *((unsigned long *)&__m256i_op0[2]) = 0x00000000000000e7;
  *((unsigned long *)&__m256i_op0[1]) = 0x00ff00ff00000007;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000007;
  *((unsigned long *)&__m256i_op1[3]) = 0xff01ff010000fff9;
  *((unsigned long *)&__m256i_op1[2]) = 0x000000000000ff19;
  *((unsigned long *)&__m256i_op1[1]) = 0xff02ff020001fffa;
  *((unsigned long *)&__m256i_op1[0]) = 0x000100010001fffa;
  *((unsigned long *)&__m256i_result[3]) = 0x807f807f00000380;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000007380;
  *((unsigned long *)&__m256i_result[1]) = 0xc03fc03f000001c0;
  *((unsigned long *)&__m256i_result[0]) = 0x00000000000001c0;
  __m256i_out = __lasx_xvrotr_h (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256i_op0[2]) = 0x00000000ffff8c80;
  *((unsigned long *)&__m256i_op0[1]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256i_op0[0]) = 0x00000000fffffe40;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0x00000000ffff8c80;
  *((unsigned long *)&__m256i_result[1]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0x00000000fffffe40;
  __m256i_out = __lasx_xvrotr_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x7f7f7f7f7f7f7f7f;
  *((unsigned long *)&__m256i_op0[1]) = 0x7f7f7f7f7f7f7f7f;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x7f7f7f7f7f7f7f7f;
  *((unsigned long *)&__m256i_result[1]) = 0x7f7f7f7f7f7f7f7f;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvrotr_h (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[3]) = 0xff01ff01ff01ff01;
  *((unsigned long *)&__m256i_op1[2]) = 0xff01ff01ff01ff01;
  *((unsigned long *)&__m256i_op1[1]) = 0xff01ff01ff01ff01;
  *((unsigned long *)&__m256i_op1[0]) = 0xff01ff01ff01ff01;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvrotr_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvrotr_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[3]) = 0x8000000080000000;
  *((unsigned long *)&__m256i_op1[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0x8000000080000000;
  *((unsigned long *)&__m256i_op1[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvrotr_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvrotr_h (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000007fee;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000007fee;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000007fee;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000007fee;
  *((unsigned long *)&__m256i_op1[3]) = 0x7fefffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0x7fefffffffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0x7fefffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0x7fefffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x000000000000fedd;
  *((unsigned long *)&__m256i_result[2]) = 0x000000000000fedd;
  *((unsigned long *)&__m256i_result[1]) = 0x000000000000fedd;
  *((unsigned long *)&__m256i_result[0]) = 0x000000000000fedd;
  __m256i_out = __lasx_xvrotr_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvrotr_h (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000ffff0000ffff;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000ffff0000ffff;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000ffff0000ffff;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000ffff0000ffff;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000ffff0000ffff;
  *((unsigned long *)&__m256i_result[2]) = 0x0000ffff0000ffff;
  *((unsigned long *)&__m256i_result[1]) = 0x0000ffff0000ffff;
  *((unsigned long *)&__m256i_result[0]) = 0x0000ffff0000ffff;
  __m256i_out = __lasx_xvrotr_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000001;
  *((unsigned long *)&__m256i_op0[2]) = 0x805f0000ffffffff;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000001;
  *((unsigned long *)&__m256i_op0[0]) = 0x805f0000ffffffff;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000001;
  *((unsigned long *)&__m256i_op1[2]) = 0x805f0000ffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000001;
  *((unsigned long *)&__m256i_op1[0]) = 0x805f0000ffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000080;
  *((unsigned long *)&__m256i_result[2]) = 0x80be0000ffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000080;
  *((unsigned long *)&__m256i_result[0]) = 0x80be0000ffffffff;
  __m256i_out = __lasx_xvrotr_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvrotr_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvrotr_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x00000000000000f0;
  *((unsigned long *)&__m256i_op0[1]) = 0x00000000000000f0;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x8000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x8000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x8000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x8000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x00000000000000f0;
  *((unsigned long *)&__m256i_result[1]) = 0x00000000000000f0;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvrotr_h (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x00000000457db03e;
  *((unsigned long *)&__m256i_op0[2]) = 0xffffffff457db03f;
  *((unsigned long *)&__m256i_op0[1]) = 0x00000000457db03e;
  *((unsigned long *)&__m256i_op0[0]) = 0xffffffff457db03f;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000f0000000f;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000f0000000f;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000f0000000f;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000f0000000f;
  *((unsigned long *)&__m256i_result[3]) = 0x00000000457d607d;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffff457d607f;
  *((unsigned long *)&__m256i_result[1]) = 0x00000000457d607d;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffff457d607f;
  __m256i_out = __lasx_xvrotr_h (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x7fffffff7fffffff;
  *((unsigned long *)&__m256i_op0[2]) = 0x07ffffff07ffffff;
  *((unsigned long *)&__m256i_op0[1]) = 0x7fffffff7fffffff;
  *((unsigned long *)&__m256i_op0[0]) = 0x07ffffff07ffffff;
  *((unsigned long *)&__m256i_op1[3]) = 0x7fffffff7fffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0x07ffffff07ffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0x7fffffff7fffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0x07ffffff07ffffff;
  *((unsigned long *)&__m256i_result[3]) = 0xfffffffefffffffe;
  *((unsigned long *)&__m256i_result[2]) = 0x0ffffffe0ffffffe;
  *((unsigned long *)&__m256i_result[1]) = 0xfffffffefffffffe;
  *((unsigned long *)&__m256i_result[0]) = 0x0ffffffe0ffffffe;
  __m256i_out = __lasx_xvrotr_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xffe0047d00e00480;
  *((unsigned long *)&__m256i_op0[2]) = 0x001fc0200060047a;
  *((unsigned long *)&__m256i_op0[1]) = 0xffe0047d00e00480;
  *((unsigned long *)&__m256i_op0[0]) = 0x001fc0200060047a;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffe0047d00e00480;
  *((unsigned long *)&__m256i_result[2]) = 0x001fc0200060047a;
  *((unsigned long *)&__m256i_result[1]) = 0xffe0047d00e00480;
  *((unsigned long *)&__m256i_result[0]) = 0x001fc0200060047a;
  __m256i_out = __lasx_xvrotr_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x386000003df80000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x386000003df80000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x00ca0000fff80000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x00ca0000fff80000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x381800007af80000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x381800007af80000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvrotr_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x00000000ffff0001;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x00000000ffff0001;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvrotr_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvrotr_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x000086fe0000403e;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000403e00004040;
  *((unsigned long *)&__m256i_op0[1]) = 0x000086fe0000403e;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000403e00004040;
  *((unsigned long *)&__m256i_op1[3]) = 0x000086fe0000403e;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000403e00004040;
  *((unsigned long *)&__m256i_op1[1]) = 0x000086fe0000403e;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000403e00004040;
  *((unsigned long *)&__m256i_result[3]) = 0x00001bfa000000f9;
  *((unsigned long *)&__m256i_result[2]) = 0x000000f900004040;
  *((unsigned long *)&__m256i_result[1]) = 0x00001bfa000000f9;
  *((unsigned long *)&__m256i_result[0]) = 0x000000f900004040;
  __m256i_out = __lasx_xvrotr_h (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000010001;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000010001;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvrotr_h (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xffff0607ffff0607;
  *((unsigned long *)&__m256i_op0[2]) = 0xffff0607ffff0607;
  *((unsigned long *)&__m256i_op0[1]) = 0xffff0607ffff0607;
  *((unsigned long *)&__m256i_op0[0]) = 0xffff0607ffff0607;
  *((unsigned long *)&__m256i_op1[3]) = 0x00000000f9f9f9f9;
  *((unsigned long *)&__m256i_op1[2]) = 0x00000000faf3f3f2;
  *((unsigned long *)&__m256i_op1[1]) = 0x00000000f9f9f9f9;
  *((unsigned long *)&__m256i_op1[0]) = 0x00000000faf3f3f2;
  *((unsigned long *)&__m256i_result[3]) = 0xffff0607ffff0383;
  *((unsigned long *)&__m256i_result[2]) = 0xffff0607ffffc0c1;
  *((unsigned long *)&__m256i_result[1]) = 0xffff0607ffff0383;
  *((unsigned long *)&__m256i_result[0]) = 0xffff0607ffffc0c1;
  __m256i_out = __lasx_xvrotr_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvrotr_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000040;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000040;
  *((unsigned long *)&__m256i_op1[3]) = 0x7ff8000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x7ff8000000000000;
  *((unsigned long *)&__m256i_op1[1]) = 0x7ff8000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x7ff8000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000040;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000040;
  __m256i_out = __lasx_xvrotr_d (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x000000000000ff00;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x000000000000ff00;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x000000007f433c79;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x000000007f433c79;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x00000000007f8000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x00000000007f8000;
  __m256i_out = __lasx_xvrotr_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x00000000000000b7;
  *((unsigned long *)&__m256i_op0[2]) = 0xffffffffffefff80;
  *((unsigned long *)&__m256i_op0[1]) = 0x00000000000000b7;
  *((unsigned long *)&__m256i_op0[0]) = 0xffffffffffefff80;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000001fff000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000001fff000;
  *((unsigned long *)&__m256i_result[3]) = 0x00000000000000b7;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffdfff80;
  *((unsigned long *)&__m256i_result[1]) = 0x00000000000000b7;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffdfff80;
  __m256i_out = __lasx_xvrotr_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000000000001;
  *((unsigned long *)&__m256i_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000010000000001;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvrotr_w (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0001000100010001;
  *((unsigned long *)&__m256i_op1[2]) = 0x0001000100800000;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvrotr_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x00000000ffff0000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x00000000ffff0000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x00000000ffff0000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x00000000ffff0000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvrotr_h (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvrotr_b (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  return 0;
}
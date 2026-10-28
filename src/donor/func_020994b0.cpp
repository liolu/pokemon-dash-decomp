/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_02053274 from https://github.com/tangosdev/sm64ds-decomp src/cstd.cpp (license: MIT), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef unsigned long long u64;
typedef signed long long s64;
typedef unsigned long size_t;
typedef s32 Fix12i;
typedef struct Vector3 {
    Fix12i x, y, z;
#line 61
    ~Vector3() {}

    Vector3() {}
    Vector3(Fix12i x_, Fix12i y_, Fix12i z_) :
        x(x_),
        y(y_),
        z(z_) {}

} Vector3;
typedef char Vector3_size_must_be_0xc[sizeof(Vector3) == 0xc ? 1 : -1];
typedef struct Vector3s {
    s16 x, y, z;

    ~Vector3s() {}

    inline Vector3s();

} Vector3s;
typedef char Vector3s_size_must_be_0x6[sizeof(Vector3s) == 6 ? 1 : -1];
typedef float f32;
typedef double f64;
typedef volatile unsigned char vu8;
typedef volatile signed char vs8;
typedef volatile unsigned short vu16;
typedef volatile signed short vs16;
typedef volatile unsigned int vu32;
typedef volatile signed int vs32;
typedef int OnYoshiEatReturnVal;
namespace cstd {
    extern int mod(int a, int b);
    extern int div(int a, int b);
    extern int fdiv_result(void);
    extern long long ldiv_result(void);
    extern long long ldiv(int a, int b);
    extern int fdiv(int numerator, int denominator);
} // namespace cstd
extern "C" {
extern void _ZN4cstd10fdiv_asyncE5Fix12IiE5Fix12IiE(int a, int b);
extern void _ZN4cstd16reciprocal_asyncE5Fix12IiE(int a);
extern int _ZN4cstd11fdiv_resultEv(void);
extern long long _ZN4cstd11ldiv_resultEv(void);
extern int func_02052fdc(void);
extern void func_02053008(int n);
}
extern "C" {
int func_020994b0(int *a, int *b) {
    volatile unsigned short *imeReg  = (volatile unsigned short *) 0x4000208;
    volatile unsigned short *sqrtcnt = (volatile unsigned short *) 0x40002b0;
    volatile unsigned int *sqrtParam = (volatile unsigned int *) 0x40002b8;
    int dx                           = a[0] - b[0];
    long long sq                     = (long long) dx * dx;
    int dy                           = a[1] - b[1];
    int dz;
    unsigned short savedIME;
    sq += (long long) dy * dy;
    dz = a[2] - b[2];
    sq += (long long) dz * dz;
    sq <<= 2;
    savedIME     = *imeReg;
    *imeReg      = 0;
    *sqrtcnt     = 1;
    sqrtParam[0] = (unsigned int) sq;
    sqrtParam[1] = (unsigned int) (sq >> 32);
    *imeReg;
    *imeReg = savedIME;
    while (*sqrtcnt & 0x8000)
        ;
    return (*(volatile int *) 0x40002b4 + 1) >> 1;
}
}
namespace cstd {
    s32 fdiv(s32 numerator, s32 denominator);
}
namespace cstd {
    long long ldiv(int a, int b);
}
extern "C" {
s32 func_02053200(s32 x);
}
extern "C" {
int func_020531a4(int a);
}
extern "C" {
s32 func_02053130(s32 x);
}
namespace cstd {
    long long ldiv_result(void);
}
namespace cstd {
    int fdiv_result(void);
}
extern "C" {
void _ZN4cstd16reciprocal_asyncE5Fix12IiE(int a);
}
extern "C" {
void func_02053008(int n);
}
extern "C" {
int func_02052fdc(void);
}
extern "C" {
void _ZN4cstd10fdiv_asyncE5Fix12IiE5Fix12IiE(int a, int b);
}
namespace cstd {
    int div(int a, int b);
}
namespace cstd {
    int mod(int a, int b);
}

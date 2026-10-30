/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_02099e38();
extern void func_0209b7b0();
extern u32 data_020d83cc;
extern u32 data_020d83e0;
extern u32 data_020d83dc;
extern s32 data_020d83d8;
extern const struct {
    u16 blk1;
    u16 blk2;
    u16 szBlk1;
} data_020c9010[16];

/* func_0214c6a8 from https://github.com/RonyxDumb/mkds src/arm9/0214c6a8_func_0214c6a8.c (license: none), reused by
 * tools/donor_match.py */
void func_0209b7b0() {
    u32 temp      = func_02099e38();
    data_020d83d8 = (s32) temp;
    data_020d83cc = (u32) (data_020c9010[temp].blk1 << 0xC);
    data_020d83dc = (u32) (data_020c9010[temp].blk2 << 0xC);
    data_020d83e0 = (u32) (data_020c9010[temp].szBlk1 << 0xC);
}

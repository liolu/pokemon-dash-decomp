/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02053c40 from https://github.com/tangosdev/sm64ds-decomp src/func_02053c40.c (license: MIT), reused by
 * tools/donor_match.py */
extern int data_020d4534;
extern void func_02099d54(void);
extern void func_0209dbf8(int a0, int a1, int a2, int a3);
extern void func_0209dcb0(int val, int *dst, int len);
void func_02099bf8(void) {
    *(volatile unsigned short *) 0x4000304 |= 0x8000;
    *(volatile unsigned short *) 0x4000304 = (*(volatile unsigned short *) 0x4000304 & 0xfffffdf1) | 0x20e;
    *(volatile unsigned short *) 0x4000304 |= 1;

    func_02099d54();

    *(volatile unsigned short *) 0x4000004 = 0;
    *(volatile int *) 0x4000000            = 0;

    if ((&data_020d4534)[0] != -1) {
        func_0209dbf8((&data_020d4534)[0], 0x4000008, 0, 0x60);
        *(volatile unsigned short *) 0x400006c = 0;
        func_0209dbf8((&data_020d4534)[0], 0x4001000, 0, 0x70);
    } else {
        volatile int a = 0;
        volatile int b;
        func_0209dcb0(a, (int *) 0x4000008, 0x60);
        *(volatile unsigned short *) 0x400006c = 0;
        b                                      = 0;
        func_0209dcb0(b, (int *) 0x4001000, 0x70);
    }

    *(volatile unsigned short *) 0x4000020 = 0x100;
    *(volatile unsigned short *) 0x4000026 = 0x100;
    *(volatile unsigned short *) 0x4000030 = 0x100;
    *(volatile unsigned short *) 0x4000036 = 0x100;
    *(volatile unsigned short *) 0x4001020 = 0x100;
    *(volatile unsigned short *) 0x4001026 = 0x100;
    *(volatile unsigned short *) 0x4001030 = 0x100;
    *(volatile unsigned short *) 0x4001036 = 0x100;
}

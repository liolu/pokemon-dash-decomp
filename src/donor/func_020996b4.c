/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* LenVec3 from https://github.com/tangosdev/sm64ds-decomp src/LenVec3.c (license: MIT), reused by tools/donor_match.py */
struct Vec3 {
    int x, y, z;
};
int func_020996b4(struct Vec3 *v) {
    unsigned long long sq = (unsigned long long) ((long long) v->x * v->x);
    sq += (unsigned long long) ((long long) v->y * v->y);
    sq += (unsigned long long) ((long long) v->z * v->z);
    volatile unsigned short *ime               = (volatile unsigned short *) 0x4000208;
    unsigned short saved                       = *ime;
    *ime                                       = 0;
    *(volatile unsigned short *) 0x40002b0     = 1;
    *(volatile unsigned long long *) 0x40002b8 = sq << 2;
    *ime;
    *ime = saved;
    while (*(volatile unsigned short *) 0x40002b0 & 0x8000)
        ;
    return (*(volatile int *) 0x40002b4 + 1) >> 1;
}

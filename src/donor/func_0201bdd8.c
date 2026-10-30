/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a887c from https://github.com/banatic/acww-decomp src/main/func_020a887c.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern void func_0201c03c(void *);
extern unsigned int data_020cd3d0;
extern unsigned int data_020cd400;
void *func_0201bdd8(void *self) {
    *(unsigned int *) self = (unsigned int) &data_020cd3d0;
    func_0201c03c((char *) self + 4);
    *(unsigned int *) self = (unsigned int) &data_020cd400;
    return self;
}

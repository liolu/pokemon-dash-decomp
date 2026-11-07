/* compiler: 1.2/b56 */
typedef struct Z {
    int pad[2];
} Z;
extern void func_0209e3d0(int, int, int, int);
extern void func_020a28e0(void *);
extern void func_020a28f8(void *);

void func_02096688(char *p) {
    int *q;
    func_0209e3d0(*(int *) (p + 0x44), 0, 1 << *(int *) (p + 0x40), 0);
    if (((int) (*(unsigned *) (p + 0x24) << 30) >> 31) != 0) {
        return;
    }
    func_020a28f8(p + 8);
    func_020a28e0(p + 0x14);
    q  = (int *) (p + 0x24);
    *q = *q | 2;
}

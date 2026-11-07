/* compiler: 1.2/sp2p3 */
extern int func_0201c8c8(int, int, int);
extern int func_0201c884(int);
extern void func_0207c7f4(int);
void func_02047db4(void) {
    int a, b, z;
    a = func_0201c8c8(0x199, 0, 0);
    b = func_0201c8c8(0x199, 0, 1);
    z = 0;
    while (func_0201c884(a) == 0 || func_0201c884(b) == 0) {
        func_0207c7f4(z);
    }
}

typedef struct O {
    char pad[0xf4];
    unsigned char f;
} O;
void func_02063030(int);
void func_0207c7f4(int);
void func_02050654(O *o) {
    int z;
    func_02063030(0x3c);
    o->f = 1;
    z    = 0;
    for (;;) {
        func_0207c7f4(z);
    }
}

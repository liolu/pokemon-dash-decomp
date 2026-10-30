/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206d8c4 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_0206d8c4.c (license: MIT), reused
 * by tools/donor_match.py */
extern void func_020a9ed4(const char *, const char *, const char *, int);
extern const char data_020c95c4;
extern const char data_020c96d0;
struct Elem {
    int a, b, c, d;
};
struct Arr {
    unsigned int count;
    int pad[3];
    struct Elem elems[1];
};
void func_020aaa54(struct Arr *s, unsigned int index) {
    unsigned int n;
    if (index >= s->count) {
        func_020a9ed4(&data_020c95c4, (const char *) 0x55, &data_020c96d0, 1);
    }
    s->count--;
    n = s->count;
    goto test;
loop:
    s->elems[index] = s->elems[index + 1];
    index++;
test:
    if (index < n) {
        goto loop;
    }
}

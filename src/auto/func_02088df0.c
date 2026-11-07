/* compiler: 1.2/b56 */
typedef unsigned int u32;
typedef struct Q {
    int a, b, c;
    int *v;
} Q;
typedef struct E {
    int x;
    Q *y;
} E;
typedef struct T {
    u32 n;
    int pad;
    u32 base;
    E **tbl;
    u32 cur;
    u32 cnt;
} T;

u32 func_02088df0(char *p) {
    T *s;
    u32 a;
    if (*(u32 *) (p + 0x84) < 1) {
        return 0x28000000;
    }
    s = (T *) (p + 0x70);
    a = *(u32 *) (p + 0x80);
    return *s->tbl[(s->base + (a >> 6)) % s->n][a & 0x3f].y->v;
}

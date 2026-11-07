/* compiler: 1.2/b56 */
typedef struct O {
    int a;
    int rc;
} O;
typedef struct T {
    char pad[0xc];
    O **tab;
    unsigned int n;
} T;
void func_0208fe48(O **out, T *t, unsigned int id) {
    O *o;
    int *p;
    if (id == 0x28000000) {
        *out = 0;
        return;
    }
    id &= 0xfff;
    if (id >= t->n) {
        *out = 0;
        return;
    }
    o = t->tab[id];
    if (o == 0) {
        *out = 0;
        return;
    }
    *out = o;
    o    = *out;
    if (o != 0) {
        p  = &o->rc;
        *p = *p + 1;
    }
}

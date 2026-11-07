/* compiler: 1.2/b56 */
typedef struct R {
    int a;
    int rc;
} R;
typedef struct O {
    char pad[0x60];
    R *r;
} O;
void func_0200d018(R **p, O *o) {
    R *t;
    int *c;
    *p = o->r;
    t  = *p;
    if (t != 0) {
        c  = &t->rc;
        *c = *c + 1;
    }
}

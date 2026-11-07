/* compiler: 1.2/b56 */
typedef struct R {
    void **vt;
    int rc;
} R;
typedef struct H {
    int a;
    R *r;
} H;

H *func_02072740(H *p) {
    R *r = p->r;
    if (r != 0) {
        int *q = &r->rc;
        *q     = *q - 1;
        if (r->rc == 0) {
            R *o = p->r;
            if (o != 0) {
                ((void (*)(R *)) o->vt[1])(o);
            }
        }
    }
    p->r = 0;
    return p;
}

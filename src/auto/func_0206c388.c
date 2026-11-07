/* compiler: 1.2/b56 */
typedef struct R {
    void **vt;
    int rc;
} R;

R **func_0206c388(R **p) {
    R *r = *p;
    if (r != 0) {
        int *q = &r->rc;
        *q     = *q - 1;
        if (r->rc == 0) {
            R *o = *p;
            if (o != 0) {
                ((void (*)(R *)) o->vt[1])(o);
            }
        }
    }
    *p = 0;
    return p;
}

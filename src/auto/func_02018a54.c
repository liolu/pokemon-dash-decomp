/* compiler: 1.2/b56 */
typedef struct R {
    int a;
    int rc;
} R;
R **func_02018a54(R **p, R *r) {
    R *t;
    int *c;
    *p = r;
    t  = *p;
    if (t != 0) {
        c  = &t->rc;
        *c = *c + 1;
    }
    return p;
}

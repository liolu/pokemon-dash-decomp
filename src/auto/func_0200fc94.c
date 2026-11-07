/* compiler: 1.2/b56 */
typedef struct R {
    int a;
    int rc;
} R;
R **func_0200fc94(R **p, R **q) {
    R *t;
    int *c;
    *p = *q;
    t  = *p;
    if (t != 0) {
        c  = &t->rc;
        *c = *c + 1;
    }
    return p;
}

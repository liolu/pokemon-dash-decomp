/* compiler: 1.2/b56 */
typedef struct Q {
    int **cur;
    int **beg;
    int a;
    int **end;
    int *p;
    int *lim;
} Q;

void func_02076190(Q *q) {
    int *t = q->p;
    q->p   = t + 1;
    if (q->p != q->lim) {
        return;
    }
    q->cur = q->cur + 1;
    if (q->cur == q->end) {
        q->cur = q->beg;
    }
    q->p   = *q->cur;
    q->lim = (int *) ((char *) q->p + 0x200);
}

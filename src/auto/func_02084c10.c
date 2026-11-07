/* compiler: 1.2/b56 */
typedef struct N {
    struct N *next;
    struct N *prev;
} N;
typedef struct L {
    int head;
    N n;
} L;
L *func_02084c10(L *l) {
    N *q;
    l->head = 0;
    q       = &l->n;
    q->prev = q;
    q->next = q->prev;
    return l;
}

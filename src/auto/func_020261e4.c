/* compiler: 1.2/b56 */
typedef struct O {
    int a;
    int rc;
    char pad[0x68];
    int key;
} O;
typedef struct N {
    int a;
    struct N *next;
    O *obj;
} N;
typedef struct S {
    char pad[0x168];
    int h;
    N *first;
} S;
void func_020261e4(O **out, S *s, int key) {
    N *end = (N *) &s->h;
    N *n   = s->first;
    if (n != end) {
        do {
            O *o = n->obj;
            if (key == o->key) {
                int *p;
                *out = o;
                o    = *out;
                if (o != 0) {
                    p  = &o->rc;
                    *p = *p + 1;
                }
                return;
            }
            n = n->next;
        } while (n != end);
    }
    *out = 0;
}

typedef struct B {
    char pad[0x15];
    unsigned char v;
} B;
typedef struct N {
    int a;
    struct N *next;
    B *b;
} N;
typedef struct O {
    char pad[0x14];
    N *head;
} O;
void func_020639e4(O *o, int v) {
    N *n = o->head;
    if (n != 0) {
        unsigned char t = v;
        do {
            n->b->v = t;
            n       = n->next;
        } while (n != 0);
    }
}

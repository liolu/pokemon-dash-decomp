/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205cc80 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0205/func_0205cc80.c (license: MIT), reused
 * by tools/donor_match.py */
extern unsigned int _ZN3IRQ7DisableEv(void);
extern void _ZN3IRQ7RestoreEj(unsigned int saved);
extern void *func_020a05f8(void *a, int b);
extern void *func_020a06c0(void *a, void *b);
typedef struct Node {
    void *field_0;
    struct Node *next;
    struct Node *field_8;
} Node;
extern Node *data_020da328;
typedef struct {
    void *field_0;
    short field_4;
    short field_6;
    int field_8;
} Tail;
extern Tail data_020da32c;
int func_020a003c(Node *thiz, void *a, void *b) {
    unsigned int saved;
    int ret = 0;

    saved = _ZN3IRQ7DisableEv();

    if (func_020a05f8(a, (int) b) == 0) {
        if (data_020da328 == 0) {
            data_020da328         = thiz;
            data_020da32c.field_0 = thiz;
            data_020da32c.field_8 = 0;
            data_020da32c.field_6 = 0;
            data_020da32c.field_4 = 0;
        } else {
            Node *cur = data_020da328;
            while (cur->next != 0) {
                cur = cur->next;
            }
            cur->next     = thiz;
            thiz->field_8 = cur;
        }
        thiz->field_0 = func_020a06c0(a, b);
        ret           = 1;
    }

    _ZN3IRQ7RestoreEj(saved);
    return ret;
}

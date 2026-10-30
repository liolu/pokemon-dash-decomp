/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205b78c from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0205/func_0205b78c.c (license: MIT), reused
 * by tools/donor_match.py */
typedef struct Node Node;
struct Slot {
    struct Node *p18;
    struct Node *p1c;
};
struct Node {
    char pad0[4];
    struct Node *f4;
    char pad8[0x10];
    struct Slot slots[1];
};
extern void func_0209cdb8(unsigned int a, unsigned int b);
void func_0209ee2c(struct Node *base, int index, struct Node *arg) {
    struct Node *r3 = base->slots[index].p18;
    if (r3 == 0) {
        goto L90;
    }
    if (arg == r3) {
        return;
    }
    if ((struct Node *) &base->slots[index] == r3->slots[0].p18) {
        r3->slots[0].p18 = base->slots[index].p1c;
        func_0209cdb8((unsigned int) base->slots[index].p18, 0x3c);
        goto L90;
    }
    {
        struct Node *p = r3->slots[0].p18;
        if (p != 0) {
            for (;;) {
                struct Node *next = p->f4;
                if ((struct Node *) &base->slots[index] == next) {
                    break;
                }
                p = next;
                if (next == 0) {
                    break;
                }
            }
        }
        p->f4 = (struct Node *) base->slots[index].p1c;
        func_0209cdb8((unsigned int) p, 8);
    }
L90: {
    struct Node *old       = arg->slots[0].p18;
    arg->slots[0].p18      = (struct Node *) &base->slots[index];
    base->slots[index].p1c = (struct Node *) old;
    base->slots[index].p18 = arg;
    func_0209cdb8((unsigned int) base, 0x3c);
    func_0209cdb8((unsigned int) arg, 0x3c);
}
}

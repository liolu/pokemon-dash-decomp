/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02058894 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0205/func_02058894.c (license: MIT), reused
 * by tools/donor_match.py */
extern unsigned int _ZN3IRQ7DisableEv(void);
extern void _ZN3IRQ7RestoreEj(unsigned int saved);
extern void func_0209c2b0(void *this);
extern void func_0209c23c(void *p);
struct Q {
    char pad4[4];
    int *arr;
    int count;
    int cap;
    int head;
};
int func_0209ca54(struct Q *q, int val, int flag) {
    unsigned int saved = _ZN3IRQ7DisableEv();
    while (q->count <= q->head) {
        if ((flag & 1) == 0) {
            _ZN3IRQ7RestoreEj(saved);
            return 0;
        }
        func_0209c2b0(q);
    }
    {
        int idx     = (q->cap + q->head) % q->count;
        q->arr[idx] = val;
        {
            int *headp = (int *) (((long long) ((char *) q + 0x10)));
            *headp     = *headp + 1;
        }
        func_0209c23c((char *) q + 2);
        _ZN3IRQ7RestoreEj(saved);
        return 1;
    }
}

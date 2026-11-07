/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct V {
    void *vt;
} V;
typedef struct S {
    u8 pad0[8];
    V **arr;
    s32 n;
    s32 idx;
    u8 pad14[0xC];
    void *p20;
    u8 pad24[0x14];
    void *p38;
} S;
extern void func_02081edc(void *);
extern void func_02081f64(void *);
extern void func_02082b74(void *);
extern u8 data_020d3e6c;
extern s32 data_020d7000[];
S *func_020856a8(S *s) {
    s32 i = 0;
    if (s->n > 0) {
        do {
            V *v = s->arr[i];
            if (v != 0) {
                v->vt = &data_020d3e6c;
                func_02082b74(v);
                func_02081f64(v);
            }
            i++;
        } while (i < s->n);
    }
    func_02081edc(s->arr);
    func_02081edc(s->p20);
    func_02081edc(s->p38);
    data_020d7000[s->idx] = data_020d7000[s->idx] - 1;
    return s;
}

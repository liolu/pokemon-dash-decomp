#include "m2c.h"

typedef struct S {
    int v;
    int a;
    struct {
        u8 pad[0xe4];
        int k;
    } *o;
} S;
extern int data_020d5d20[2];
extern int data_020d5e4c[];
extern struct {
    int a[5];
} data_020d5e7c[];
extern int data_020d5ea4[];

void func_02060608(S *s, int v) {
    int k;
    s->v = v;
    k    = s->o->k;
    switch (k) {
        case 10:
            data_020d5e4c[data_020d5d20[0] - 3] = s->v;
            return;
        case 11:
            data_020d5e7c[data_020d5d20[0] - 3].a[data_020d5d20[1]] = s->v;
            return;
        default:
            data_020d5ea4[k] = s->v;
            return;
    }
}

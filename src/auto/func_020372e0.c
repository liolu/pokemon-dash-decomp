/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Q {
    u8 pad[0x10];
    int len;
} Q;
typedef struct P {
    u8 pad[0x14];
    int mode;
    u8 pad2[0x14];
    Q *q;
} P;
typedef struct W {
    u8 pad[8];
    int v;
} W;

void func_0203767c(void);
void func_0203a314(void);
void func_0203a698(void);
void func_0207d830(void *, int, int);
void func_0207da08(void *, int, int, int, int, int, int, int, int, int);
void func_0207dfe8(void *, int);
void func_0207f230(int);
void func_02081f64(int);
extern u32 data_020d51b0;
extern int data_020d51d8;
extern W *data_020d51e4;
extern void *data_020d51e8;
extern void *data_020d5274;
extern P *data_020d5278;

void func_020372e0(void) {
    int t = data_020d51d8;
    if (t != 0) {
        func_0207f230(t);
        func_02081f64(t);
    }
    switch (data_020d51b0) {
        case 2:
        case 3:
        case 4:
        case 5:
            break;
        default:
        case 0:
        case 1: {
            P *p;
            int r, w;
            func_0207dfe8(data_020d5274, 0);
            func_0207dfe8(data_020d5278, 0);
            func_0207dfe8(data_020d51e8, 0);
            func_0203a698();
            func_0203a314();
            func_0203767c();
            w = data_020d51e4->v;
            p = data_020d5278;
            if (p->q != 0) {
                int d;
                if (p->mode == 1) {
                    d = 0x40;
                } else {
                    d = 0x20;
                }
                r = p->q->len / d;
            } else {
                r = -1;
            }
            func_0207da08(p, 0x20, 2, w, 0, 0, r, 0, 0, 0);
            break;
        }
    }
    func_0207d830(data_020d51e8, 0, 0);
}

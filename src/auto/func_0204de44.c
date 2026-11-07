/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct X {
    int a;
} X;
typedef struct S {
    u8 pad[0xec];
    int st;
    u8 pad2[0x700 - 0xf0];
    X *x;
} S;

void func_02047db4(S *);
void func_02047e8c(S *);
void func_0204e510(S *);
void func_0204e7b8(S *);
void func_0204ebe4(void);
void func_0204ec54(S *, int);
void func_0204ed1c(S *);
int func_020605e0(X *);
u32 func_0206068c(X *);
void func_02060c58(X *);
void func_0207c7f4(int);
void func_02081f64(X *);
extern int data_020d5d20;

void func_0204de44(S *s) {
    int st;
    X *x;
    func_0204ebe4();
    func_0204e7b8(s);
    func_0204ed1c(s);
    func_0204ec54(s, s->x->a);
    func_02047db4(s);
    do {
        switch (func_0206068c(s->x)) {
            default:
                break;
            case 6:
                s->st = 3;
                break;
            case 0:
            case 1:
                func_0204ec54(s, s->x->a);
                break;
            case 7:
                switch (s->x->a) {
                    case 0:
                        data_020d5d20 = 3;
                        s->st         = 10;
                        break;
                    case 1:
                        data_020d5d20 = 4;
                        s->st         = 10;
                        break;
                }
                break;
        }
        st = s->st;
    } while (st == 0x20);
    s->st = 0x20;
    if (func_020605e0(s->x) == 0) {
        do {
            func_0207c7f4(0);
        } while (func_020605e0(s->x) == 0);
    }
    func_02047e8c(s);
    x = s->x;
    if (x != 0) {
        func_02060c58(x);
        func_02081f64(x);
    }
    func_0204e510(s);
    s->st = st;
}

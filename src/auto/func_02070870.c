/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct B {
    u8 pad[4];
    s32 y;
} B;
typedef struct A {
    u8 pad[8];
    s32 x;
} A;
void func_02071974(s32 x, s32 y);
void func_02070870(A *a, B *b) {
    s32 x = a->x;
    s32 y;
    if (x == 0) {
        return;
    }
    y = b->y;
    if (y == 0) {
        return;
    }
    func_02071974(x, y);
}

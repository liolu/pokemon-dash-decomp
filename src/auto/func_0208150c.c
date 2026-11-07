/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct V3 {
    s32 x;
    s32 y;
    s32 z;
} V3;

void func_02081580(void *a, void *b, void *c);
void func_02098c38(u8 *m, s32 x, s32 y, s32 z);
void func_02098d64(u8 *m, void *a, void *b);

void func_0208150c(void *a, V3 *v, void *b, void *c) {
    u8 m[0x30];
    func_02081580(a, b, c);
    if (v->x == 0x1000 && v->y == 0x1000 && v->z == 0x1000) {
        return;
    }
    func_02098c38(m, v->x, v->y, v->z);
    func_02098d64(m, a, a);
}

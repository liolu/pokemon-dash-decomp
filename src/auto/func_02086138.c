/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    volatile s32 id;
    s32 pad[4];
} E;

E *func_02086138(s32 a, E *p) {
    s32 v;
    if (a == 0x38000001) {
        return p;
    }
    if (p == NULL) {
        return NULL;
    }
    if (p->id != 0x22) {
        do {
            v = p->id;
            if (v == 0x38000001 || v == a) {
                return p + 1;
            }
            p++;
        } while (p->id != 0x22);
    }
    return NULL;
}

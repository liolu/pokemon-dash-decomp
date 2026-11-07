/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02073d0c(void *);
void func_02073e50(void *);
void func_02077230(void **);

s32 func_02074000(u8 *arg0) {
    void *best;
    void *head;
    void *node;
    void *it;

    it   = *(void **) (arg0 + 0x34);
    head = arg0 + 0x30;
    best = NULL;
    if (it != head) {
        do {
            node = *(void **) ((u8 *) it + 0x10);
            if (func_02073d0c(node) == 0 && (*((u8 *) node + 8) & 1)) {
                if (best == NULL ||
                    *(u32 *) (*(u8 **) ((u8 *) node + 0xC) + 4) < *(u32 *) (*(u8 **) ((u8 *) best + 0xC) + 4)) {
                    best = node;
                }
            }
            func_02077230(&it);
        } while (it != head);
    }
    if (best == NULL) {
        return 0;
    }
    func_02073e50(best);
    return 1;
}

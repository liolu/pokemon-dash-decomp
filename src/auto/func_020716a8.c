/* compiler: 1.2/b56 */
#include "m2c.h"

void func_0207544c(void *);
void func_02071284(void **, u8 *);
void func_02073018(void *, s32, s32);

void func_020716a8(u8 *arg0, s32 arg1, s32 arg2) {
    void *local;

    if ((arg2 & 4) != 0 && *(void **) (arg0 + 0x18) != NULL) {
        func_0207544c(*(void **) (arg0 + 0x18));
    }
    if (*(void **) (arg0 + 0x4) == NULL) {
        return;
    }
    if ((arg0[0] & 0x40) == 0) {
        return;
    }
    func_02071284(&local, arg0);
    func_02073018(local, arg1, arg2);
    if (local != NULL) {
        u32 *cnt = (u32 *) ((u8 *) local + 4);
        u32 v    = *cnt;
        *cnt     = v - 1;
        if (*((s32 *) local + 1) == 0) {
            if (local != NULL) {
                (*(void (**)(void *))(*(u8 **) local + 4))(local);
            }
        }
    }
    local = NULL;
}

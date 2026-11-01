#include "m2c.h"

s32 func_0206396c(void *arg0) {
    void *list;
    void *obj;
    s32 v;

    list = M2C_FIELD(arg0, void **, 0x100);
    if (list != NULL) {
        obj = ((void **) list)[M2C_FIELD(arg0, u8 *, 0x104)];
    } else {
        obj = NULL;
    }
    if (obj == NULL) {
        obj = M2C_FIELD(arg0, void **, 0x14);
    }
    v = M2C_FIELD(M2C_FIELD(M2C_FIELD(obj, void **, 0xC), void **, 0xC), s32 *, 0x20);
    return (s16) v / 2;
}

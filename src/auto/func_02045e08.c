/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0209de34(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_020d57e0;
extern M2C_UNK data_020d5810;
extern M2C_UNK data_020d5c00;

void func_02045e08(s32 arg0, s32 arg1) {
    func_0209de34((s32) ((M2C_UNK *) ((s8 *) &data_020d57e0 + (arg0 * 8))),
                  (s32) ((M2C_UNK *) ((s8 *) &data_020d57e0 + (arg1 * 8))), 8);
    func_0209de34((arg0 * 0xA8) + (s32) &data_020d5810, (arg1 * 0xA8) + (s32) &data_020d5810, 0xA8);
    func_0209de34((s32) ((M2C_UNK *) ((s8 *) &data_020d5c00 + (arg0 * 2))),
                  (s32) ((M2C_UNK *) ((s8 *) &data_020d5c00 + (arg1 * 2))), 2);
}

/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_020d4da8;
extern u8 *data_020d4dac;

u8 *func_0200243c(void) {
    u32 st;
    u8 *obj;

    st = *(u32 *) (data_020d4da8 + 0xAC);
    switch (st) {
        case 0x4A565841:
            *(u32 *) (data_020d4dac + 0x28) = 0x081BCB60;
            break;
        case 0x4A505841:
            *(u32 *) (data_020d4dac + 0x28) = 0x081BCAF0;
            break;
        case 0x45565841:
            if (data_020d4da8[0xBC] == 0) {
                *(u32 *) (data_020d4dac + 0x28) = 0x081E8354;
            } else {
                *(u32 *) (data_020d4dac + 0x28) = 0x081E836C;
            }
            break;
        case 0x45505841:
            if (data_020d4da8[0xBC] == 0) {
                *(u32 *) (data_020d4dac + 0x28) = 0x081E82E4;
            } else {
                *(u32 *) (data_020d4dac + 0x28) = 0x081E82FC;
            }
            break;
        default:
            obj = data_020d4dac;
            if (*(u32 *) obj <= 0xFF) {
                if (*(u32 *) (obj + 4) <= 0xF) {
                    return obj;
                }
            }
            return NULL;
    }
    *(u32 *) (data_020d4dac + 0x88) = 0x88C;
    *(u32 *) (data_020d4dac + 0x8C) = 0x3974;
    *(u32 *) (data_020d4dac + 0x90) = 0x234;
    *(u32 *) (data_020d4dac + 0x94) = 0x238;
    return data_020d4dac;
}

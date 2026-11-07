#include "m2c.h"

extern u32 data_020d3de8;
extern void *data_020cd74c;
extern u8 data_020ccd84;
extern u8 data_020ca918;
extern u8 data_020ca060;
extern u8 data_020cbb64;
extern u8 data_020cb21c;
extern u8 data_020cc458;

s32 func_020228bc(void) {
    switch (data_020d3de8) {
        case 0:
            data_020cd74c = &data_020ccd84;
            return 0;
        case 1:
            data_020cd74c = &data_020ca918;
            return 0;
        case 3:
            data_020cd74c = &data_020ca060;
            return 0;
        case 2:
            data_020cd74c = &data_020cbb64;
            return 0;
        case 5:
            data_020cd74c = &data_020cb21c;
            return 0;
        case 4:
            data_020cd74c = &data_020cc458;
            return 0;
        default:
            return -1;
    }
}

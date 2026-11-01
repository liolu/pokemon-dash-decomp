#include "m2c.h"

extern u8 data_020cffa8;
extern u8 data_020cffac;
extern u8 data_020cffb4;
extern u8 data_020cffbc;
extern u32 data_020d3de8;

void *func_020570bc(void) {
    switch (data_020d3de8) {
        case 2:
        case 5:
            return &data_020cffa8;
        case 3:
            return &data_020cffac;
        case 4:
            return &data_020cffb4;
        default:
            return &data_020cffbc;
    }
}

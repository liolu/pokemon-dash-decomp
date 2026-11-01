#include "m2c.h"

extern u8 data_020cfd6c;
extern u8 data_020cfd94;
extern u8 data_020cfdbc;
extern u8 data_020cfde4;
extern u32 data_020d3de8;

void *func_0205711c(void) {
    switch (data_020d3de8) {
        case 2:
        case 5:
            return &data_020cfd6c;
        case 3:
            return &data_020cfde4;
        case 4:
            return &data_020cfdbc;
        default:
            return &data_020cfd94;
    }
}

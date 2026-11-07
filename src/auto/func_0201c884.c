/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 id, a, b, c;
} E4;
extern E4 data_020d4f84[3];

s32 func_0201c884(s32 arg0) {
    s32 i;
    for (i = 0; i < 3; i++) {
        if (arg0 == data_020d4f84[i].id && data_020d4f84[i].c > 0) {
            return 0;
        }
    }
    return 1;
}

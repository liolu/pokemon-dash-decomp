/* compiler: 1.2/b56 */
#include "m2c.h"

void **func_02004698(void **arg0) {
    u8 *obj;
    obj = (u8 *) *arg0;
    if (obj != NULL) {
        *(s32 *) (obj + 4) = *(s32 *) (obj + 4) - 1;
        if (*(s32 *) (obj + 4) == 0) {
            obj = (u8 *) *arg0;
            if (obj != NULL) {
                (*(void (**)(void *))(*(u8 **) obj + 4))(obj);
            }
        }
    }
    *arg0 = NULL;
    return arg0;
}

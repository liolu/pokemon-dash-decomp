/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02032558(void *);
void func_02081f64(void *);
extern char data_020cd0d8;
extern char data_020cd170;

void *func_0200c454(void *arg0) {
    u8 *obj = (u8 *) arg0;
    u8 *r2;
    u8 *t;

    *(void **) obj = &data_020cd0d8;
    r2             = *(u8 **) (obj + 0x114);
    if (r2 != NULL) {
        *(s32 *) (r2 + 4) = *(s32 *) (r2 + 4) - 1;
        if (*(s32 *) (r2 + 4) == 0) {
            t = *(u8 **) (obj + 0x114);
            if (t != NULL) {
                (*(void (**)(void *))(*(u8 **) t + 4))(t);
            }
        }
    }
    *(void **) (obj + 0x114) = NULL;
    *(void **) obj           = &data_020cd170;
    func_02032558(obj);
    func_02081f64(obj);
    return obj;
}

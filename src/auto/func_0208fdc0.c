/* compiler: 1.2/b56 */
#include "m2c.h"
extern void func_0208fe48(void *);

void func_0208fdc0(void **arg0) {
    u8 *sp0;
    func_0208fe48(&sp0);
    *arg0 = sp0;
    if (*arg0 != 0) {
        s32 *q = (s32 *) ((u8 *) *arg0 + 4);
        *q     = *q + 1;
    }
    if (sp0 != 0) {
        s32 *q = (s32 *) (sp0 + 4);
        *q     = *q - 1;
        if (*(s32 *) (sp0 + 4) == 0) {
            if (sp0 != 0) {
                (*(void (**)(void *))(*(u8 **) sp0 + 4))(sp0);
            }
        }
    }
    sp0 = 0;
}

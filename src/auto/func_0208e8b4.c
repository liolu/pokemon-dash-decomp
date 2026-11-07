/* compiler: 1.2/b56 */
#include "m2c.h"

void **func_02082044(s32);
void func_0208fa94(void **, s32);
extern char data_020d4348[];

void func_0208e8b4(void ***arg0, s32 arg1) {
    void **t;
    void **x;
    s32 *p;
    t = func_02082044(0x1C);
    if (t != NULL) {
        func_0208fa94(t, arg1);
        *t = data_020d4348;
    }
    *arg0 = t;
    x     = *arg0;
    if (x != NULL) {
        p  = (s32 *) x + 1;
        *p = *p + 1;
    }
}

/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 raw[0x18];
} Blob;

void func_0207849c(Blob *, void *, s32);
void func_02079108(void *, Blob *, Blob *);
void func_02078408(void *);

void *func_0207757c(void *arg0) {
    Blob s0;
    Blob s18;

    func_0207849c(&s18, arg0, *(s32 *) ((char *) arg0 + 0x14));
    func_0207849c(&s0, arg0, 0);
    func_02079108(arg0, &s0, &s18);
    func_02078408(arg0);
    return arg0;
}

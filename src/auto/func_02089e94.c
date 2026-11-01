/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 raw[0x18];
} Blob;

void func_0208ad64(Blob *, void *, s32);
void func_0208ae30(void *, Blob *, Blob *);
void func_0208ac04(void *);

void *func_02089e94(void *arg0) {
    Blob s0;
    Blob s18;

    func_0208ad64(&s18, arg0, *(s32 *) ((char *) arg0 + 0x14));
    func_0208ad64(&s0, arg0, 0);
    func_0208ae30(arg0, &s0, &s18);
    func_0208ac04(arg0);
    return arg0;
}

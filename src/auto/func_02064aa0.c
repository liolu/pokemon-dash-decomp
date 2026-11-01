/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02003a44(void *);
void func_02004698(void *);
void func_02032558(void *);
void func_02081f64(void *);
extern s32 data_020cf3bc;
extern s32 data_020d0788;

void *func_02064aa0(void *arg0) {
    u8 *obj;

    obj           = (u8 *) arg0;
    *(s32 **) obj = &data_020d0788;
    *(s32 **) obj = &data_020cf3bc;
    func_02004698(obj + 0x110);
    func_02003a44(obj + 0x10C);
    func_02003a44(obj + 0x108);
    func_02003a44(obj + 0x104);
    func_02032558(obj);
    func_02081f64(obj);
    return obj;
}

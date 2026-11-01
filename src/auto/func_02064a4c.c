/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern char data_020cf3bc[];
extern char data_020d0788[];
void func_02003a44(void *);
void func_02004698(void *);
void func_02032558(void *);

void **func_02064a4c(void **arg0) {
    *arg0 = data_020d0788;
    *arg0 = data_020cf3bc;
    func_02004698((char *) arg0 + 0x110);
    func_02003a44((char *) arg0 + 0x10C);
    func_02003a44((char *) arg0 + 0x108);
    func_02003a44((char *) arg0 + 0x104);
    func_02032558(arg0);
    return arg0;
}

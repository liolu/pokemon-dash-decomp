/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_ov001_020de77c;
extern void *data_ov001_020de7b0;
extern void *data_ov001_020de768;
extern void *data_ov001_020de79c;
extern void *data_ov001_020de780;
extern void *data_ov001_020de7b8;
void func_0207dfe8(void *, s32);
void func_0207d830(void *, s32, s32);
void func_0207f230(void *);
void func_0207f4a0(void *);
void func_02081f64(void *);
void func_0206d498(void *);
void func_02081edc(void *);

void func_ov001_020dd834(void) {
    void *r4;

    func_0207dfe8(data_ov001_020de77c, 0);
    func_0207d830(data_ov001_020de77c, 0, 0);
    r4 = data_ov001_020de7b0;
    if (r4 != NULL) {
        func_0207f230(r4);
        func_02081f64(r4);
    }
    r4 = data_ov001_020de768;
    if (r4 != NULL) {
        func_0207f230(r4);
        func_02081f64(r4);
    }
    r4 = data_ov001_020de79c;
    if (r4 != NULL) {
        func_0207f230(r4);
        func_02081f64(r4);
    }
    r4 = data_ov001_020de780;
    if (r4 != NULL) {
        func_0207f4a0(r4);
        func_02081f64(r4);
    }
    data_ov001_020de7b0 = NULL;
    data_ov001_020de768 = NULL;
    data_ov001_020de79c = NULL;
    data_ov001_020de780 = NULL;
    func_0206d498(data_ov001_020de7b8);
    func_02081edc(data_ov001_020de7b8);
    data_ov001_020de7b8 = NULL;
}

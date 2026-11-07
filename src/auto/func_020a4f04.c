/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef void (*CB)(void *);
void func_0209cd9c(s32, s32);
void func_0209d6cc(void);
void func_0209dc7c(s32, void *, s32);
void func_0209dc94(void *, void *, s32);
void func_0209de34(void *, void *, s32);
void func_020a4ee8(void);
void func_020a548c(void);
typedef struct {
    u8 *p0;
    u8 *p4;
    u8 p8[8];
    s32 s10;
    CB tab[0x28];
    CB cbb4;
    CB cb[16];
    s32 arg[16];
} G;
extern G *data_020dae2c;
extern u8 data_020dae6c[];
extern u8 data_020dae80[];
extern u8 data_020dae90[];

void func_020a4f04(void *arg0, u16 *m, s32 arg2) {
    volatile u16 sp0;
    u16 var_r8;
    u16 var_r7;
    u16 var_r6;
    u16 i;
    u16 *var_r5;
    u16 *var_r4;
    CB cb;

    if (arg2 != 0) {
        return;
    }
    func_0209cd9c(data_020dae2c->s10, 0x100);
    func_0209cd9c((s32) data_020dae2c->p4, 0xA00);
    if (m[0] >= 0x28) {
        if (m[0] == 0x80) {
            if (m[1] == 0x13) {
                func_0209d6cc();
            }
            cb = data_020dae2c->cbb4;
            if (cb != NULL) {
                cb(m);
            }
        } else if (m[0] == 0x82) {
            if (data_020dae2c->cb[m[3]] != 0) {
                *(s32 *) (m + 0xE) = data_020dae2c->arg[m[3]];
                func_0209cd9c(*(s32 *) (m + 4), *(u16 *) (data_020dae2c->p4 + 0x46));
                data_020dae2c->cb[m[3]](m);
            }
        } else if (m[0] == 0x81) {
            m[0] = 0xF;
            cb   = *(CB *) (m + 0xA);
            if (cb != NULL) {
                cb(m);
            }
        }
    } else {
        if (m[0] == 0xE && (u16) (m[2] + 0xFFF5) <= 1 && m[1] == 0) {
            func_0209cd9c(*(s32 *) (m + 4), *(u16 *) (data_020dae2c->p4 + 0x46));
        }
        if (m[0] == 2 && m[1] == 0) {
            cb = data_020dae2c->tab[m[0]];
            func_020a548c();
            if (cb == NULL) {
                return;
            }
            cb(m);
            return;
        }
        cb = data_020dae2c->tab[m[0]];
        if (cb != NULL) {
            cb(m);
        }
        if (m[0] == 8 || m[0] == 0xC) {
            if (m[0] == 8) {
                var_r5 = m + 5;
                var_r4 = m + 0xA;
                var_r8 = m[4];
                var_r7 = m[8];
                var_r6 = 0;
            } else if (m[0] == 0xC) {
                var_r7 = 0;
                var_r8 = m[4];
                var_r6 = m[8];
                var_r4 = NULL;
                var_r5 = m + 5;
            }
            if (var_r8 == 7 || var_r8 == 9) {
                *(s16 *) (data_020dae6c + 0)    = 0x82;
                *(s16 *) (data_020dae6c + 2)    = 0;
                *(u16 *) (data_020dae6c + 4)    = var_r8;
                *(s32 *) (data_020dae6c + 8)    = 0;
                *(s32 *) (data_020dae6c + 0xC)  = 0;
                *(s16 *) (data_020dae6c + 0x10) = 0;
                *(u16 *) (data_020dae6c + 0x12) = var_r7;
                *(u16 *) (data_020dae6c + 0x20) = var_r6;
                *(u16 *) (data_020dae6c + 0x1A) = 0xFFFF;
                func_0209de34(var_r5, data_020dae80, 6);
                if (var_r4 != NULL) {
                    func_0209dc94(var_r4, data_020dae90, 0x18);
                } else {
                    sp0 = 0;
                    func_0209dc7c(sp0, data_020dae90, 0x18);
                }
                i = 0;
                do {
                    *(u16 *) (data_020dae6c + 6) = i;
                    if (data_020dae2c->cb[i] != 0) {
                        *(s32 *) (data_020dae6c + 0x1C) = data_020dae2c->arg[i];
                        data_020dae2c->cb[i](data_020dae6c);
                    }
                    i += 1;
                } while (i < 0x10);
            }
        }
    }
    func_0209cd9c(data_020dae2c->s10, 0x100);
    func_020a4ee8();
}

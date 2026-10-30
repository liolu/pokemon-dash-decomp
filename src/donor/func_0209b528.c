/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200736c from projets/code-lyoko/src/donor/func_0200736c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
extern void func_0209dcc4(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_0209da38(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_0209b528(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_0209da38(dmaNo, src, dest, size, callback, arg);
    } else {
        func_0209dcc4(src, dest, size);
    }
}
extern u32 data_020d83d0;
extern u32 data_020d4534;
#pragma thumb off
void func_0209b528(void *src, u32 offset, u32 size) {
    GXi_DmaCopy32Async(data_020d4534, src, (void *) (data_020d83d0 + offset), size, ((void *) 0), ((void *) 0));
}

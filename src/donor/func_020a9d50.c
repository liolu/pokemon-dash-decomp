/* compiler: 1.2/sp2p3 -O4,s -lang c99 -inline on,noauto */
/* Isd_PrintTargetWrite from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/isd/isd_print_target_write.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
typedef struct IsdSharedBlock {
    u32 unk_00[5];
    u32 flags;
    u32 unk_18;
    u8 *channel;
} IsdSharedBlock;
typedef struct IsdRing {
    u16 head;
    u16 unk_02;
    u16 tail;
} IsdRing;
typedef void (*IsdByteWriter)(IsdRing *ring, int byte);
extern BOOL func_020aa10c(u32 mask);
typedef struct IsdBusState {
    u16 exmemcnt;
    u16 sharedWord;
    u16 active;
} IsdBusState;
typedef struct IsdPrintTarget IsdPrintTarget;
struct IsdPrintTarget {
    u32 unk_00;
    u32 limit;
    u32 total;
    u32 stored;
    void (*write)(IsdPrintTarget *target, const char *text, u32 length);
};
extern void func_020a9d50(IsdPrintTarget *target, const char *text, u32 length);
extern void func_020a9c9c(IsdRing *ring, int byte);
extern void func_020a9fb0(IsdBusState *saved);
extern void func_020a9f2c(IsdBusState *saved);
extern void func_020aa050(u32 *saved);
extern void func_020aa020(u32 saved);
static inline int Isd_ReadByte(const char *address) {
    if ((u32) address & 1) {
        return (*(u16 *) (address - 1) & 0xff00) >> 8;
    }
    return *(u16 *) address & 0xff;
}
extern void func_020a9c0c(IsdRing *ring, int byte);
void func_020a9d50(IsdPrintTarget *target, const char *text, u32 length) {
    volatile IsdSharedBlock *shared = ((volatile IsdSharedBlock *) 0x027fff60);
    IsdRing *ring                   = (IsdRing *) (shared->channel + 0x90);
    IsdByteWriter writer            = ((void *) 0);
    IsdBusState busState;
    u32 savedState;

    if (length != 0 && func_020aa10c(0x20000)) {
        if (func_020aa10c(0x1)) {
            writer = func_020a9c9c;
        } else if (func_020aa10c(0x4)) {
            writer = func_020a9c0c;
        }
        if (writer != ((void *) 0)) {
            func_020aa050(&savedState);
            func_020a9fb0(&busState);
            if (target != ((void *) 0)) {
                while (length-- != 0) {
                    if (target->stored < target->limit - 1) {
                        u16 byte = Isd_ReadByte(text);
                        writer(ring, byte & 0xff);
                        target->stored++;
                    }
                    target->total++;
                    text++;
                }
            }
            func_020a9f2c(&busState);
            func_020aa020(savedState);
        }
    }
}

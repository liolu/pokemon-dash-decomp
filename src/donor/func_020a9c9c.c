/* compiler: 1.2/sp2p3 -O4,s -lang c99 -inline on,noauto */
/* Isd_CartRingWriteByte from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/isd/isd_cart_ring_write_byte.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
typedef struct IsdRing {
    u16 head;
    u16 unk_02;
    u16 tail;
} IsdRing;
extern BOOL func_020aa10c(u32 mask);
extern void func_020a9c9c(IsdRing *ring, int byte);
static inline void Isd_WriteByte(u8 *bytes, u32 index, int value) {
    u32 offset = index & ~1;
    u16 half   = *(u16 *) (bytes + offset);

    if (index & 1) {
        half = (half & 0x00ff) | ((u16) value << 8);
    } else {
        half = (half & 0xff00) | (u16) value;
    }
    *(u16 *) (bytes + offset) = half;
}
void func_020a9c9c(IsdRing *ring, int byte) {
    u16 next;
    u16 head;
    u8 *bytes;

    head = ring->head;
    next = (head + 1) & 0x7fff;
    if (func_020aa10c(0x2000)) {
        bytes = (u8 *) 0x09fd0000;
    } else {
        bytes = (u8 *) 0x08fd0000;
    }
    if (next != ring->tail) {
        Isd_WriteByte(bytes, head, byte);
        while (ring->head != next) {
            ring->head = next;
        }
    }
}

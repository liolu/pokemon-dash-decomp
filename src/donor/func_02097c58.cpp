/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_02051bd0 from https://github.com/tangosdev/sm64ds-decomp src/engine/sound/SoundEngine.cpp (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
namespace Sound {
    struct InfoInstrumentBankEntry {
        u32 fileId;
        u16 waveArchiveIds[4];

        static InfoInstrumentBankEntry *GetWithID(u32 id);
    };
} // namespace Sound
extern // namespace Sound
    struct HeapAllocator;
struct NestedHeapIterator {
    HeapAllocator *mFirst;
    HeapAllocator *mLast;
    u16 mCount;
    u16 mLinkOffset;

    NestedHeapIterator() {}
    NestedHeapIterator(u32 linkOffset);

    int Next(HeapAllocator *h_);
    int Previous(HeapAllocator *h_);
    void AddAt(HeapAllocator *at_, HeapAllocator *node_);
    void AddFirst(HeapAllocator *a_);
    void AddLast(HeapAllocator *a_);

    static NestedHeapIterator *FindNested(void *addr);
    void Init(HeapAllocator *a_);
    void Remove(HeapAllocator *node_);
    void *RecursiveFindNested(void *addr);
};
struct HeapAllocator {
    u32 mMagic;
    HeapAllocator *mPrevious;
    HeapAllocator *mNext;
    NestedHeapIterator mChildren;
    void *mStart;
    void *mEnd;
    u32 mFlags;

    HeapAllocator() {}

    void Remove();
    void Destroy();
};
struct S_204f720;
typedef void (*Fn)(void *a, int b, int c, int d);
struct Bank {
    int f0;
    u16 ids[4];
};
struct A4 {
    int f0;
    u16 pad4;
    u8 b6;
    u8 b7;
};
struct Node {
    char pad8[8];
    int f8;
    Fn fc;
    int f10;
    int f14;
    char pad[8];
    char body;
};
struct S_204f720 {
    char pad34[0x34];
    short a;
    short pad36;
    short b;
};
typedef struct Node Node;
extern "C" {
extern struct HeapAllocator;
extern struct NestedHeapIterator;
extern void func_0209ee2c(struct Node *base, int index, struct Node *arg);
extern int func_02095fd8(void *thiz, int seqData, int seqOffset, int bank);
extern void func_02096008(void);
extern void *func_02096014(void **p, int idx, int r7);
extern void func_02096330(struct S_204f720 **pp, short v);
extern void func_0209634c(char **c, int b);
extern void func_020963c4(void **p, unsigned char v);
extern int func_02096a24(unsigned int i);
extern int func_02096b5c(unsigned int id);
extern void *func_020975cc(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, void *owner);
extern void *func_02097ab0(int index, void *unk);
extern void func_02097ad0(unsigned char *c, int off);
extern void func_02097af0(unsigned char *c, int off);
extern int func_02097b10(int a, int b);
extern int func_02097c58(void **p, int a1, unsigned int a2, int a3, struct A4 *a4, int a5);
}
extern "C" int func_02097c58(void **p, int a1, unsigned int a2, int a3, struct A4 *a4, int a5) {
    struct Bank *bank;
    void *node;
    int r7;
    void *r6 = 0;
    int r5;
    int i;
    void *np;

    bank = (struct Bank *) Sound::InfoInstrumentBankEntry::GetWithID(a2);
    if (bank == 0) {
        return 0;
    }

    r7 = ((int (*)(void **p, int idx, int r7)) func_02096014)(p, a1, a3);
    if (r7 == 0) {
        return 0;
    }

    r5 = func_02096a24(bank->f0);
    if (r5 == 0) {
        r6 = func_02097ab0(a1, (void *) r7);
        if (r6 == 0) {
            ((void (*)(int r7)) func_02096008)(r7);
            return 0;
        }
        r5 = (int) ((void *(*) (unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3,
                                void *owner)) func_020975cc)(bank->f0, (unsigned int) &func_02097af0, 0, 0, r6);
        if (r5 == 0) {
            ((void (*)(int r7)) func_02096008)(r7);
            return 0;
        }
    }

    for (i = 0; i < 4; i++) {
        u16 v = bank->ids[i];
        if (v != 0xffff) {
            int q;
            node = ((void *(*) (unsigned int id)) func_02096b5c)(v);
            if (node == 0) {
                ((void (*)(int r7)) func_02096008)(r7);
                return 0;
            }
            q = func_02096a24(*(unsigned int *) node);
            if (q == 0) {
                if (r6 == 0) {
                    r6 = func_02097ab0(a1, (void *) r7);
                    if (r6 == 0) {
                        ((void (*)(int r7)) func_02096008)(r7);
                        return 0;
                    }
                }
                q = (int) ((void *(*) (unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3,
                                       void *owner)) func_020975cc)(*(unsigned int *) node, (unsigned int) &func_02097ad0, 0,
                                                                    0, r6);
                if (q == 0) {
                    ((void (*)(int r7)) func_02096008)(r7);
                    return 0;
                }
            }
            ((void (*)(int base, int index, int arg)) func_0209ee2c)(r5, i, q);
        }
    }

    np = (void *) func_02096a24((unsigned int) a4->f0);
    if (np == 0) {
        if (r6 == 0) {
            r6 = func_02097ab0(a1, (void *) r7);
            if (r6 == 0) {
                ((void (*)(int r7)) func_02096008)(r7);
                return 0;
            }
        }
        np = ((void *(*) (unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, void *owner)) func_020975cc)(
            (unsigned int) a4->f0, (unsigned int) &func_02097b10, 0, 0, r6);
        if (np == 0) {
            ((void (*)(int r7)) func_02096008)(r7);
            return 0;
        }
    }

    ((int (*)(int thiz, int p1, int p2, int p3)) func_02095fd8)(r7, (int) ((char *) np + *(int *) ((char *) np + 0x18)), 0,
                                                                r5);
    func_020963c4(p, a4->b6);
    ((void (*)(void **c, unsigned char v)) func_0209634c)(p, a4->b7);
    ((void (*)(void *pp, int v)) func_02096330)(p, a5);
    return 1;
}
extern "C" int func_02097b10(int a, int b);
extern "C" void func_02097af0(unsigned char *c, int off);
extern "C" void func_02097ad0(unsigned char *c, int off);
extern "C" void *func_02097ab0(int index, void *unk);
extern "C" void *func_020975cc(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, void *owner);
extern "C" int func_02096b5c(unsigned int id);
extern "C" int func_02096a24(unsigned int i);
extern "C" void func_020963c4(void **p, unsigned char v);
extern "C" void func_0209634c(char **c, int b);
extern "C" void func_02096330(struct S_204f720 **pp, short v);
extern "C" void *func_02096014(void **p, int idx, int r7);
extern "C" void func_02096008(void);
extern "C" int func_02095fd8(void *thiz, int seqData, int seqOffset, int bank);

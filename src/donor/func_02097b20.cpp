/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_02051a98 from https://github.com/tangosdev/sm64ds-decomp src/engine/sound/SoundEngine.cpp (license: MIT), reused by
 * tools/donor_match.py */
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
typedef void (*Fn)(void *a, int b, int c, int d);
struct Entry7 {
    unsigned int f0;
    unsigned short ids[6];
};
struct P4 {
    int f0;
    short pad;
    unsigned char f6;
    unsigned char f7;
};
struct P5 {
    char pad[0x18];
    int off18;
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
struct Inner83 {
    char pad[0x34];
    short h34;
    short pad36;
    short h38;
    short h3a;
};
typedef struct Node Node;
extern "C" {
extern struct HeapAllocator;
extern struct NestedHeapIterator;
extern void func_0209ee2c(struct Node *base, int index, struct Node *arg);
extern int func_02095fd8(void *thiz, int seqData, int seqOffset, int bank);
extern void func_02096008(void);
extern void *func_02096014(void **p, int idx, int r7);
extern void func_02096308(struct Inner83 **o, short a, short b);
extern void func_0209634c(char **c, int b);
extern void func_020963c4(void **p, unsigned char v);
extern int func_02096a24(unsigned int i);
extern int func_02096b5c(unsigned int id);
extern int func_02097b20(void *p0, void *p1, unsigned int p2, void *p3, struct P4 *p4, struct P5 *p5, int p6, int p7);
}
extern "C" int func_02097b20(void *p0, void *p1, unsigned int p2, void *p3, struct P4 *p4, struct P5 *p5, int p6, int p7) {
    struct Entry7 *e7;
    void *r6;
    void *r5;
    int i;

    e7 = (struct Entry7 *) Sound::InfoInstrumentBankEntry::GetWithID(p2);
    if (e7 == 0) {
        return 0;
    }
    r6 = ((void *(*) (void *p, void *idx, void *arg)) func_02096014)(p0, p1, p3);
    if (r6 == 0) {
        return 0;
    }
    r5 = ((void *(*) (unsigned int i)) func_02096a24)(e7->f0);
    if (r5 == 0) {
        ((void (*)(void *p)) func_02096008)(r6);
        return 0;
    }
    for (i = 0; i < 4; i++) {
        unsigned int id = e7->ids[i];
        unsigned int *ent;
        void *node;
        if (id != 0xffff) {
            ent = ((unsigned int *(*) (unsigned int id)) func_02096b5c)(id);
            if (ent == 0) {
                ((void (*)(void *p)) func_02096008)(r6);
                return 0;
            }
            node = ((void *(*) (unsigned int i)) func_02096a24)(*ent);
            if (node == 0) {
                ((void (*)(void *p)) func_02096008)(r6);
                return 0;
            }
            ((void (*)(void *base, int index, void *arg)) func_0209ee2c)(r5, i, node);
        }
    }
    ((void (*)(void *thiz, void *p, int v, void *node)) func_02095fd8)(r6, (char *) p5 + p5->off18, p4->f0, r5);
    ((void (*)(void *p, unsigned char v)) func_020963c4)(p0, p4->f6);
    ((void (*)(void *p, unsigned char v)) func_0209634c)(p0, p4->f7);
    ((void (*)(void *o, int a, int b)) func_02096308)(p0, p6, p7);
    return 1;
}
extern "C" int func_02096b5c(unsigned int id);
extern "C" int func_02096a24(unsigned int i);
extern "C" void func_020963c4(void **p, unsigned char v);
extern "C" void func_0209634c(char **c, int b);
extern "C" void func_02096308(struct Inner83 **o, short a, short b);
extern "C" void *func_02096014(void **p, int idx, int r7);
extern "C" void func_02096008(void);
extern "C" int func_02095fd8(void *thiz, int seqData, int seqOffset, int bank);

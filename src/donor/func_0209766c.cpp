/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_020516d4 from https://github.com/tangosdev/sm64ds-decomp src/engine/sound/SoundEngine.cpp (license: MIT), reused by
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
struct Entry_20516d4;
typedef void (*Fn)(void *a, int b, int c, int d);
struct Node {
    char pad8[8];
    int f8;
    Fn fc;
    int f10;
    int f14;
    char pad[8];
    char body;
};
struct Entry_20516d4 {
    int field0;
    unsigned short ids[4];
};
typedef struct Node Node;
extern "C" {
extern struct HeapAllocator;
extern struct NestedHeapIterator;
extern void func_0209ee2c(struct Node *base, int index, struct Node *arg);
extern int func_02096b5c(unsigned int id);
extern int func_0209744c(int a, int b);
extern int func_020974ac(int a, int b);
extern int func_0209766c(unsigned int id, int flags, int c);
}
extern "C" int func_0209766c(unsigned int id, int flags, int c) {
    struct Entry_20516d4 *entry;
    int base;
    int i;

    base  = 0;
    entry = (struct Entry_20516d4 *) Sound::InfoInstrumentBankEntry::GetWithID(id);
    if (entry == 0) {
        return 0;
    }

    if (flags & 2) {
        base = func_020974ac(entry->field0, c);
        if (base == 0) {
            return 0;
        }
    }

    if (flags & 4) {
        for (i = 0; i < 4; i++) {
            if (entry->ids[i] != 0xffff) {
                int *p;
                int arg;
                p = ((int *(*) (unsigned int id)) func_02096b5c)(entry->ids[i]);
                if (p == 0) {
                    return 0;
                }
                arg = func_0209744c(*p, c);
                if (arg == 0) {
                    return 0;
                }
                if (base != 0) {
                    ((void (*)(int base, int index, int arg)) func_0209ee2c)(base, i, arg);
                }
            }
        }
    }
    return 1;
}
extern "C" int func_020974ac(int a, int b);
extern "C" int func_0209744c(int a, int b);
extern "C" int func_02096b5c(unsigned int id);

/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_0205179c from https://github.com/tangosdev/sm64ds-decomp src/engine/sound/SoundEngine.cpp (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
namespace Sound {
    struct InfoSequenceEntry {
        u32 fileId;
        u16 bankId;
        u8 volume;
        u8 channelPriority;
        u8 playerPriority;
        u8 playerNumber;

        static InfoSequenceEntry *GetWithID(u32 id);
    };
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
extern // namespace IRQ
    struct Bank_205179c;
typedef void (*Fn)(void *a, int b, int c, int d);
struct Seq {
    int f0;
    u16 f4;
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
struct Bank_205179c {
    int f0;
    u16 f4;
};
typedef struct Node Node;
extern "C" {
extern struct HeapAllocator;
extern struct NestedHeapIterator;
extern void func_0209ee2c(struct Node *base, int index, struct Node *arg);
extern int func_02096b5c(unsigned int id);
extern int func_0209744c(int a, int b);
extern int func_020974ac(int a, int b);
extern int func_0209756c(int a, int b);
extern int func_02097734(unsigned int id, int flags, int arg2);
}
extern "C" int func_02097734(unsigned int id, int flags, int arg2) {
    struct Seq *seq;
    struct Bank_205179c *bank;
    int r = 0;
    int i;

    seq = (struct Seq *) Sound::InfoSequenceEntry::GetWithID(id);
    if (!seq) {
        return r;
    }
    bank = (struct Bank_205179c *) Sound::InfoInstrumentBankEntry::GetWithID(seq->f4);
    if (!bank) {
        return r;
    }

    if (flags & 2) {
        r = func_020974ac(bank->f0, arg2);
        if (!r) {
            return 0;
        }
    }
    if (flags & 4) {
        for (i = 0; i < 4; i++) {
            u16 id2 = (&bank->f4)[i];
            if (id2 != 0xffff) {
                void *p = ((void *(*) (unsigned int id)) func_02096b5c)(id2);
                int q;
                if (!p) {
                    return 0;
                }
                q = func_0209744c(*(int *) p, arg2);
                if (!q) {
                    return 0;
                }
                if (r != 0) {
                    ((void (*)(int base, int index, int arg)) func_0209ee2c)(r, i, q);
                }
            }
        }
    }
    if (flags & 1) {
        int s = func_0209756c(seq->f0, arg2);
        if (!s) {
            return 0;
        }
    }
    return 1;
}
extern "C" int func_0209756c(int a, int b);
extern "C" int func_020974ac(int a, int b);
extern "C" int func_0209744c(int a, int b);
extern "C" int func_02096b5c(unsigned int id);

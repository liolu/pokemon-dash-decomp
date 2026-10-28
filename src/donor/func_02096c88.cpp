/* compiler: 2.0/sp1p5 -O4,p -ipa file -inline on,noauto */
/* _ZN5Sound17InfoSequenceEntry9GetWithIDEj from https://github.com/tangosdev/sm64ds-decomp src/engine/sound/SoundEngine.cpp
 * (license: MIT), reused by tools/donor_match.py */
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
extern "C" {
extern struct HeapAllocator;
extern struct NestedHeapIterator;
extern char *data_020d7e6c;
}
Sound::InfoSequenceEntry *Sound::InfoSequenceEntry::GetWithID(u32 id) {
    char *root = data_020d7e6c;
    char *sub  = *(char **) (root + 0x84);
    int off    = *(int *) (sub + 0x8);
    char *tbl  = (off == 0) ? 0 : sub + off;
    if (tbl == 0) {
        return 0;
    }
    if ((int) id < 0) {
        return 0;
    }
    if (id >= *(unsigned *) tbl) {
        return 0;
    }
    int v      = ((int *) (tbl + id * 4))[1];
    char *base = *(char **) (root + 0x84);
    return (v == 0) ? 0 : (InfoSequenceEntry *) (base + v);
}

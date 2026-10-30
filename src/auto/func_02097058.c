/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_SndHeapLoadState from https://github.com/sturmds/advance-wars-dual-strike-decomp
 * src/game/main/sound/nns_snd_heap_load_state.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
typedef struct LinkList {
    void *head;
    void *tail;
    u16 count;
    u16 linkOffset;
} LinkList;
extern void *func_020953c8(LinkList *list, void *object);
extern void func_020953f4(LinkList *list, void *object);
extern void func_02097058(void *heap, int level);
typedef struct SoundHeapItem {
    u8 pad_00[8];
    u32 unk_08;
    void (*onUnload)(void *payload, u32 arg1, u32 arg2, u32 arg3);
    u32 unk_10;
    u32 unk_14;
    u8 pad_18[8];
    u8 payload[1];
} SoundHeapItem;
typedef struct SoundHeap {
    void *frameHeap;
    LinkList levels;
} SoundHeap;
extern BOOL func_02096fb8(SoundHeap *heap);
extern int func_02095750(void *frameHeap, int level);
extern int func_020957ac(void *frameHeap, int level);
extern void func_02096f94(void);
extern int func_02096fb8(SoundHeap *heap);
extern void func_020971f8(SoundHeap *heap);
void func_02097058(void *heapArg, int level) {
    SoundHeap *heap = heapArg;
    LinkList *saved;
    SoundHeapItem *item = ((void *) 0);

    if (level == 0) {
        func_020971f8(heap);
        return;
    }
    if (level < heap->levels.count) {
        LinkList *levels = &heap->levels;
        void *none       = item;

        do {
            saved = func_020953c8(levels, none);
            item  = func_020953c8(saved, item);
            while (item != ((void *) 0)) {
                if (item->onUnload != ((void *) 0)) {
                    item->onUnload(item->payload, item->unk_08, item->unk_10, item->unk_14);
                }
                item = func_020953c8(saved, item);
            }
            func_020953f4(levels, saved);
        } while (level < heap->levels.count);
    }
    func_02095750(heap->frameHeap, level);
    func_02096f94();
    func_020957ac(heap->frameHeap, heap->levels.count);
    func_02096fb8(heap);
}

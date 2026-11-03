/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_020c8cf8 from projets/sims-2-the/src/donor/func_020c8cf8.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef signed long s32;
typedef unsigned long long int u64;
typedef signed long long int s64;
namespace std {
    extern "C" {
    typedef __typeof__(sizeof(0)) size_t;
    }
} // namespace std
namespace std {
    extern "C" {
    extern int func_02108070(const void *a, const void *b, size_t size);
    }
} // namespace std
typedef union Str {
    struct {
        u32 isLong : 1;
        u32 capacity : 31;
        u32 size;
        char *ptr;
    } l;

    struct {
        u8 isLong : 1;
        u8 len : 7;
        char buf[11];
    } s;

    u32 words[3];

    Str() {}

    u32 size() const {
        return !l.isLong ? s.len : l.size;
    }

    const char *c_str() const {
        return !l.isLong ? s.buf : l.ptr;
    }

} Str;
extern "C" {
extern Str *LobbyString_InitCopy(Str *output, const Str *input);
extern Str *LobbyString_Destroy(Str *output);
}
typedef struct LobbyCharVector {
    char *data;
    u32 size;
    u32 capacity;
} LobbyCharVector;
extern "C" {
extern LobbyCharVector *LobbyCharVector_Destroy(LobbyCharVector *vector);
extern char *LobbyByteVector_Data(LobbyCharVector *);
}
struct AssignTag {};
struct IteratorTag {};
struct RangeTag {};
struct ByteIterator {
    const u8 *p;
    u32 extra;

    ByteIterator(const u8 *q) :
        p(q) {}
};
typedef struct LobbyEvent {
    s32 time;
    u32 type;
} LobbyEvent;
typedef struct LobbyEventDequeMap {
    LobbyEvent **blocks;
    u32 start;
    u32 size;
    u32 capacity;
} LobbyEventDequeMap;
typedef struct LobbyEventDequeMapIterator {
    LobbyEvent **cur;
    LobbyEvent **first;
    LobbyEvent **mid;
    LobbyEvent **last;

    LobbyEventDequeMapIterator() {}

    LobbyEventDequeMapIterator(LobbyEvent **c, LobbyEvent **f, LobbyEvent **m, LobbyEvent **l) :
        cur(c),
        first(f),
        mid(m),
        last(l) {}

    LobbyEventDequeMapIterator(const LobbyEventDequeMapIterator &other) :
        cur(other.cur),
        first(other.first),
        mid(other.mid),
        last(other.last) {}

    inline LobbyEventDequeMapIterator(struct LobbyEventDequeMap *map, u32 i);

    inline LobbyEventDequeMapIterator &operator+=(int n);

    LobbyEvent *const &operator*() const {
        return *cur;
    }

    LobbyEventDequeMapIterator &operator++() {
        if (++cur == last) {
            cur = first;
        }
        return *this;
    }

} LobbyEventDequeMapIterator;
extern "C" LobbyEventDequeMapIterator &LobbyEventDequeMapIterator_Advance(LobbyEventDequeMapIterator *, int);
inline LobbyEventDequeMapIterator &LobbyEventDequeMapIterator::operator+=(int n) {
    return LobbyEventDequeMapIterator_Advance(this, n);
}
inline LobbyEventDequeMapIterator::LobbyEventDequeMapIterator(LobbyEventDequeMap *map, u32 i) :
    cur(map->blocks + i),
    first(map->blocks),
    mid(first + map->start),
    last(first + map->capacity) {}
using std::func_02108070;
inline void *operator new(std::size_t, void *p) {
    return p;
}
extern "C" void LobbyCharVector_AssignIterRange(LobbyCharVector *, ByteIterator, ByteIterator, RangeTag);
namespace HandleReceivedData {
    struct Vec;
    extern "C" Vec *LobbyCharVector_Destroy(Vec *);
    struct Vec {
        char *ptr;
        u32 size, cap;

        void Init() {
            ptr  = 0;
            size = 0;
            cap  = 0;
        }

        void Destroy() {
            LobbyCharVector_Destroy(this);
        }
    };
    extern "C" const u8 *LobbyByteVector_Data(Vec *);
} // namespace HandleReceivedData
namespace HandleLibraryData {
    struct AllocatorTag {};
    struct CopyTag {};
    struct Vec;
    extern "C" void LobbyCharVector_AssignIterRange(Vec *, ByteIterator, ByteIterator, RangeTag);
    extern "C" void LobbyCharVector_InitRange(Vec *, const u8 *, const u8 *, AllocatorTag);
    extern "C" void LobbyCharVector_AssignRange(Vec *, const u8 *, const u8 *, CopyTag);
    extern "C" const u8 *LobbyByteVector_Data(const Vec *);
    extern "C" void LobbyCharVector_Destroy(const Vec *);
    struct Vec {
        u8 *ptr;
        u32 size, cap;

        void Init() {
            ptr  = 0;
            size = 0;
            cap  = 0;
        }

        void Assign(const u8 *first, const u8 *last) {
            Assign(ByteIterator(first), ByteIterator(last));
        }

        void Assign(ByteIterator first, ByteIterator last) {
            Assign(first, last, AssignTag(), IteratorTag());
        }

        void Assign(ByteIterator first, ByteIterator last, const AssignTag &, const IteratorTag &) {
            LobbyCharVector_AssignIterRange(this, first, last, RangeTag());
        }

        void InitCopy(const Vec &o, AllocatorTag al) {
            ptr  = 0;
            size = 0;
            cap  = 0;
            LobbyCharVector_InitRange(this, o.ptr, o.ptr + o.size, al);
        }

        void AssignVec(const Vec &o) {
            if (this != &o) {
                LobbyCharVector_AssignRange(this, o.ptr, o.ptr + o.size, CopyTag());
            }
        }
    };
    inline bool operator==(const Vec &a, const Vec &b) {
        return a.size == b.size &&
               (a.size == 0 || func_02108070(LobbyByteVector_Data(&a), LobbyByteVector_Data(&b), a.size) == 0);
    }
    struct Quad {
        u32 a;
        u64 b;
        u32 c;
    };
    inline bool operator==(const Quad &a, const Quad &b) {
        return func_02108070(&a, &b, sizeof(Quad)) == 0;
    }
} // namespace HandleLibraryData
namespace OnGetSchedule {
    struct Vec;
    extern "C" void LobbyCharVector_AssignIterRange(Vec *, ByteIterator, ByteIterator, RangeTag);
    extern "C" const char *LobbyByteVector_Data(const void *);
    struct Vec {
        char *ptr;
        u32 size, cap;

        Vec() :
            ptr(0),
            size(0),
            cap(0) {}

        void Assign(const ByteIterator &first, const ByteIterator &last) {
            Assign(first, last, AssignTag(), IteratorTag());
        }

        void Assign(const ByteIterator &first, const ByteIterator &last, const AssignTag &, const IteratorTag &) {
            LobbyCharVector_AssignIterRange(this, first, last, RangeTag());
        }

        void Assign(const u8 *first, const u8 *last) {
            Assign(ByteIterator(first), ByteIterator(last));
        }
    };
} // namespace OnGetSchedule
namespace OnEnterMainChannel {
    using std::func_02108070;
    struct TrueType {};
    struct FalseType {};
    template <class T, class U> inline void Assign(T &d, const U &s, TrueType, FalseType) {
        d = s;
    }
    template <class T, class U> inline void Assign(T &d, const U &s) {
        Assign(d, s, TrueType(), FalseType());
    }
    struct Str {
        u32 words[3];

        Str() {
            u32 *p = words;
            u32 i;
            for (i = 0; i < 3; i++) {
                p[i] = 0;
            }
        }
    };
    extern "C" void LobbyString_Destroy(Str *s);
    struct Pair {
        s64 v;

        Pair() {}

        Pair(s64 x) :
            v(x) {}
    };
    template <class A, class B> struct KV {
        A first;
        B second;

        template <class C, class D> KV(const KV<C, D> &p) {
            Assign(first, p.first);
            const D *src = &p.second;
            B *dst       = &second;
            *dst         = *src;
        }
    };
} // namespace OnEnterMainChannel
namespace StringSplit {
    struct Str;
    extern "C" Str *LobbyString_InitCopy(Str *, const Str *);
    extern "C" void LobbyString_Destroy(Str *);
    struct Str {
        union {
            struct {
                u32 isLong : 1;
                u32 capacity : 31;
                u32 size;
                char *data;
            } l;

            struct {
                u8 isLong : 1;
                u8 size : 7;
                char data[11];
            } s;

            u32 words[3];
        } raw;

        Str() {}

        Str(const Str &o) {
            LobbyString_InitCopy(this, &o);
        }

        u32 size() const {
            return !raw.l.isLong ? raw.s.size : raw.l.size;
        }

        void Destroy() {
            LobbyString_Destroy(this);
        }
    };
    class Alloc {};
    struct Vec;
    extern "C" void func_0201a304(Vec *, const Str &, Alloc);
    struct Vec {
        Str *data;
        u32 count, cap;

        Alloc get_alloc() const {
            return Alloc();
        }

        Vec() :
            data(0),
            count(0),
            cap(0) {}

        void push_back(const Str &x) {
            Alloc a = get_alloc();
            (void) a;
            if (count < cap) {
                new(data + count) Str(x);
                count++;
            } else {
                func_0201a304(this, x, Alloc());
            }
        }
    };
} // namespace StringSplit
namespace TimerMapInsertNode {
    class Alloc {};
    struct Inner {
        u64 x;
        u64 y;
        u32 p;
        u32 q;
    };
    template <class A, class B> struct Pair {
        A first;
        B second;

        Pair(const A &a, const B &b) :
            first(a) {
            B *dst = &second;
            *dst   = b;
        }
    };
    typedef Pair<u32, Inner> Value;
} // namespace TimerMapInsertNode
extern "C" {
struct Vec {
    void *ptr;
    u32 size, cap;
};
struct Alloc {
    u8 tag;
};
extern void func_0201b9e8(struct Vec *, u32, int), func_0201b84c(struct Vec *, u32, void *);
extern void func_0201a304(struct Vec *a, void *b, struct Alloc unused);
void func_0201a304(struct Vec *a, void *b, struct Alloc unused) {
    struct Alloc alloc = {0};
    func_0201b9e8(a, 1, 0);
    func_0201b84c(a, 1, b);
}
}
extern "C" LobbyCharVector *LobbyCharVector_Destroy(LobbyCharVector *vector);
extern "C" Str *LobbyString_InitCopy(Str *output, const Str *input);
extern "C" Str *LobbyString_Destroy(Str *output);

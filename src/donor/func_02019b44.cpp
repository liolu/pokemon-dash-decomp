/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* LobbyTimerMap_Insert from https://github.com/ctrl-cheeb-del/pokeheartgold src/lobby/ppw_lobby.cpp (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed char s8;
typedef signed short int s16;
typedef signed long s32;
typedef unsigned long long int u64;
typedef signed long long int s64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;
typedef float f32;
typedef volatile f32 vf32;
typedef u8 REGType8;
typedef u16 REGType16;
typedef u32 REGType32;
typedef u64 REGType64;
typedef vu8 REGType8v;
typedef vu16 REGType16v;
typedef vu32 REGType32v;
typedef vu64 REGType64v;
typedef int BOOL;
enum LobbyChatState {
    LOBBY_CHAT_STATE_INIT,
    LOBBY_CHAT_STATE_CONNECTING,
    LOBBY_CHAT_STATE_CONNECTED,
    LOBBY_CHAT_STATE_READY,
    LOBBY_CHAT_STATE_DISCONNECTING,
    LOBBY_CHAT_STATE_ERROR,
};
enum PPWLobbyState {
    PPW_LOBBY_STATE_NOT_INITIALIZED,
    PPW_LOBBY_STATE_CONNECTING,
    PPW_LOBBY_STATE_CONNECTED,
    PPW_LOBBY_STATE_WAIT_SCHEDULE,
    PPW_LOBBY_STATE_ENUM_CHANNELS,
    PPW_LOBBY_STATE_SEARCHING_CHANNEL,
    PPW_LOBBY_STATE_ENTER_MAIN_CHANNEL,
    PPW_LOBBY_STATE_WAIT_MAIN_CHANNEL,
    PPW_LOBBY_STATE_READY,
    PPW_LOBBY_STATE_CLOSED,
    PPW_LOBBY_STATE_ERROR,
};
enum PPWLobbyChannelState {
    PPW_LOBBY_CHANNEL_STATE_NONE,
    PPW_LOBBY_CHANNEL_STATE_JOINING,
    PPW_LOBBY_CHANNEL_STATE_JOINED,
    PPW_LOBBY_CHANNEL_STATE_ERROR,
};
enum PPWLobbyChannelKind {
    PPW_LOBBY_CHANNEL_KIND_MAIN,
    PPW_LOBBY_CHANNEL_KIND_FOOT1,
    PPW_LOBBY_CHANNEL_KIND_FOOT2,
    PPW_LOBBY_CHANNEL_KIND_CLOCK,
    PPW_LOBBY_CHANNEL_KIND_NEWS,
    PPW_LOBBY_CHANNEL_KIND_INVALID,
};
enum PPWLobbyMessageFormat {
    PPW_LOBBY_MESSAGE_FORMAT_STRING,
    PPW_LOBBY_MESSAGE_FORMAT_BINARY,
};
enum PPWLobbyMessageKind {
    PPW_LOBBY_MESSAGE_KIND_SYSTEM,
    PPW_LOBBY_MESSAGE_KIND_USER,
};
enum PPWLobbySystemMessage {
    PPW_LOBBY_SYSTEM_MESSAGE_START_SCHEDULE,
    PPW_LOBBY_SYSTEM_MESSAGE_RECRUIT,
    PPW_LOBBY_SYSTEM_MESSAGE_STOP_RECRUIT,
};
enum PPWLobbyScheduleState {
    PPW_LOBBY_SCHEDULE_STATE_NONE          = 0,
    PPW_LOBBY_SCHEDULE_STATE_QUESTIONNAIRE = 2,
    PPW_LOBBY_SCHEDULE_STATE_LOADED        = 4,
    PPW_LOBBY_SCHEDULE_STATE_STARTED       = 5,
};
enum PPWLobbyPlayerState {
    PPW_LOBBY_PLAYER_STATE_NEW,
    PPW_LOBBY_PLAYER_STATE_HAS_PROFILES,
    PPW_LOBBY_PLAYER_STATE_READY,
    PPW_LOBBY_PLAYER_STATE_ENTERED,
};
enum PPWLobbyTimer {
    PPW_LOBBY_TIMER_CONNECT_TIMEOUT,
    PPW_LOBBY_TIMER_UPLOAD_SYSTEM_PROFILE,
    PPW_LOBBY_TIMER_UPLOAD_USER_PROFILE,
    PPW_LOBBY_TIMER_SEND_RECRUIT_INFO,
    PPW_LOBBY_TIMER_POLL_CHANNEL_MODE,
    PPW_LOBBY_TIMER_REQUEST_CHANNEL_TIME,
    PPW_LOBBY_TIMER_REQUEST_LOBBY_DATA,
};
enum PPWLobbyResult {
    PPW_LOBBY_RESULT_SUCCESS,
    PPW_LOBBY_RESULT_ERROR_ALLOC,
    PPW_LOBBY_RESULT_ERROR_SESSION,
    PPW_LOBBY_RESULT_ERROR_PARAM,
    PPW_LOBBY_RESULT_ERROR_STATE,
    PPW_LOBBY_RESULT_ERROR_CHANNEL,
    PPW_LOBBY_RESULT_ERROR_NODATA,
    PPW_LOBBY_RESULT_ERROR_CONDITION,
};
enum PPWLobbyWebResult {
    PPW_LOBBY_WEB_RESULT_SUCCESS,
    PPW_LOBBY_WEB_RESULT_SERVER_ERROR,
    PPW_LOBBY_WEB_RESULT_INVALID,
};
enum PPWLobbyError {
    PPW_LOBBY_ERROR_NONE,
    PPW_LOBBY_ERROR_UNKNOWN,
    PPW_LOBBY_ERROR_ALLOC,
    PPW_LOBBY_ERROR_SESSION,
    PPW_LOBBY_ERROR_SCHEDULE,
    PPW_LOBBY_ERROR_VIP,
    PPW_LOBBY_ERROR_CHECK_PROFILE,
    PPW_LOBBY_ERROR_QUESTIONNAIRE,
};
class PPWLobbyErrorMap {
public:
    PPWLobbyError Map(PPWLobbyResult result) const;
};
inline PPWLobbyError PPWLobbyErrorMap::Map(PPWLobbyResult result) const {
    PPWLobbyError error = PPW_LOBBY_ERROR_NONE;
    switch (result) {
        case PPW_LOBBY_RESULT_ERROR_ALLOC:
            error = PPW_LOBBY_ERROR_ALLOC;
            break;
        case PPW_LOBBY_RESULT_ERROR_SESSION:
            error = PPW_LOBBY_ERROR_SESSION;
            break;
    }
    return error;
}
extern "C" {
extern void *LobbyMem_Alloc(u32 size);
extern void LobbyMem_ReleaseReserve(void);
}
namespace std {
    extern "C" {
    typedef __typeof__(sizeof(0)) size_t;
    }
} // namespace std
namespace std {
    extern "C" {
    typedef char *va_list;
    }
} // namespace std
namespace std {
    extern "C" {
    extern void *memset(void *data, int value, size_t size);
    extern void *memmove(void *dest, const void *src, size_t size);
    extern void *memcpy(void *dest, const void *src, size_t size);
    extern void *memchr(const void *arr, int value, size_t size);
    extern int memcmp(const void *a, const void *b, size_t size);
    extern char *strcpy(char *dest, const char *src);
    extern unsigned strlen(const char *str);
    extern char *strncpy(char *dest, const char *src, size_t n);
    extern int strcmp(const char *a, const char *b);
    extern char *strcat(char *dest, const char *src);
    extern char *strncat(char *dest, const char *src, size_t n);
    extern unsigned strspn(const char *a, const char *b);
    extern char *strtok(char *str, const char *sep);
    extern char *strstr(const char *haystack, const char *needle);
    }
} // namespace std
using std::va_list;
extern "C" {
extern int STD_TVSNPrintf(char *dest, u32 len, const char *format, va_list va);
extern int OS_SPrintf(char *dest, const char *format, ...);
extern int OS_SNPrintf(char *dest, u32 len, const char *format, ...);
extern int OS_VSPrintf(char *dest, const char *format, va_list va);
extern int OS_VSNPrintf(char *dest, u32 len, const char *format, va_list va);
extern void OS_Terminate();
}
extern "C" {
typedef enum RTCWeek {
    RTC_WEEK_SUNDAY = 0,
    RTC_WEEK_MONDAY,
    RTC_WEEK_TUESDAY,
    RTC_WEEK_WEDNESDAY,
    RTC_WEEK_THURSDAY,
    RTC_WEEK_FRIDAY,
    RTC_WEEK_SATURDAY,
    RTC_WEEK_MAX
} RTCWeek;
typedef enum RTCResult {
    RTC_RESULT_SUCCESS = 0,
    RTC_RESULT_BUSY,
    RTC_RESULT_ILLEGAL_PARAMETER,
    RTC_RESULT_SEND_ERROR,
    RTC_RESULT_INVALID_COMMAND,
    RTC_RESULT_ILLEGAL_STATUS,
    RTC_RESULT_FATAL_ERROR,
    RTC_RESULT_MAX
} RTCResult;
typedef struct RTCDate {
    u32 year;
    u32 month;
    u32 day;
    RTCWeek week;
} RTCDate;
typedef struct RTCTime {
    u32 hour;
    u32 minute;
    u32 second;
} RTCTime;
typedef void (*RTCCallback)(RTCResult result, void *arg);
extern void RTC_Init(void);
extern RTCResult RTC_GetDateTimeAsync(RTCDate *date, RTCTime *time, RTCCallback callback, void *arg);
extern s64 RTC_ConvertDateTimeToSecond(const RTCDate *date, const RTCTime *time);
extern s32 RTC_ConvertDateToDay(const RTCDate *date);
extern void RTC_ConvertSecondToDateTime(RTCDate *date, RTCTime *time, s64 sec);
}
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
static inline BOOL StrIsShort(const Str *s) {
    return !s->l.isLong;
}
static inline u32 StrSize(Str *s) {
    return StrIsShort(s) ? s->s.len : s->l.size;
}
static inline const char *StrData(Str *s) {
    return StrIsShort(s) ? s->s.buf : s->l.ptr;
}
extern "C" {
extern Str *LobbyString_InitCopy(Str *output, const Str *input);
extern Str *LobbyString_InitFromCStr(Str *output, const char *text);
extern Str *LobbyString_InitSubstring(Str *, Str *, u32, u32);
extern Str *LobbyString_Destroy(Str *output);
extern Str *LobbyString_Assign(Str *dst, const Str *src);
extern void LobbyString_AssignCStr(Str *, const char *);
extern void LobbyString_Append(Str *, void *);
extern void LobbyString_AppendCStr(Str *, const char *);
extern Str *LobbyString_Replace(Str *out, u32 pos, u32 remove, const Str *input);
extern void LobbyString_ReplaceCStr(Str *, u32, u32, const char *);
extern Str *LobbyString_ReplaceSubstring(Str *, u32, u32, Str *, u32, u32);
extern void LobbyString_Reserve(Str *, u32);
extern int LobbyString_Compare(const Str *, const Str *);
extern int LobbyString_CompareCStr(const Str *, const char *);
extern int LobbyString_CompareChars(const Str *s, u32 pos, u32 length, const void *other, u32 otherLength);
extern int LobbyString_CompareSubstring(const Str *s, u32 pos, u32 length, const Str *other);
extern int LobbyString_CompareNoCase(Str *a, Str *b, u32 length);
extern int LobbyString_FindFirstOfChars(Str *, const char *, u32, u32);
extern void LobbyString_Substr(Str *, Str *, u32, u32);
extern Str *LobbyString_Concat(Str *out, Str *left, Str *right);
extern Str *LobbyString_ConcatCStr(Str *out, Str *left, char *right);
extern void LobbyString_Format(Str *, const char *, ...);
extern void LobbyString_FormatN(Str *, u32, const char *, ...);
extern int LobbyString_Equals(const Str &, const Str &);
}
struct LobbyTag {};
typedef struct LobbyCharVector {
    char *data;
    u32 size;
    u32 capacity;
} LobbyCharVector;
typedef struct LobbyU32Vector {
    u32 *data;
    u32 size;
    u32 capacity;
} LobbyU32Vector;
typedef struct LobbyStringVector {
    Str *data;
    u32 size;
    u32 capacity;
} LobbyStringVector;
typedef struct LobbyVectorBufferCapacity {
    u32 value;
    u32 *allocator;
} LobbyVectorBufferCapacity;
typedef struct LobbyCharVectorBuffer {
    char *data;
    u32 size;
    LobbyVectorBufferCapacity capacity;
    u32 start;
} LobbyCharVectorBuffer;
typedef struct LobbyU32VectorBuffer {
    u32 *data;
    u32 size;
    LobbyVectorBufferCapacity capacity;
    u32 start;
} LobbyU32VectorBuffer;
typedef struct LobbyStringVectorBuffer {
    Str *data;
    u32 size;
    LobbyVectorBufferCapacity capacity;
    u32 start;
} LobbyStringVectorBuffer;
extern "C" {
extern LobbyCharVector *LobbyCharVector_Destroy(LobbyCharVector *vector);
extern char *LobbyCharVector_Data(LobbyCharVector *);
extern char *LobbyByteVector_Data(LobbyCharVector *);
extern void LobbyCharVector_Grow(LobbyCharVector *, u32);
extern u32 LobbyCharVector_RecommendSize(LobbyCharVector *, u32);
extern LobbyU32Vector *LobbyU32Vector_Destroy(LobbyU32Vector *vector);
extern LobbyU32Vector *LobbyU32Vector_Destroy2(LobbyU32Vector *vector);
extern void LobbyU32Vector_Allocate(LobbyU32Vector *vector, u32 capacity, LobbyTag tag);
extern void LobbyU32Vector_Reallocate(LobbyU32Vector *vector, u32 unused, u32 capacity);
extern u32 LobbyU32Vector_RecommendSize(LobbyU32Vector *vector, u32 extra);
extern void LobbyU32Vector_Reserve(LobbyU32Vector *vector, u32 capacity);
extern void LobbyU32Vector_PushBackSlow(LobbyU32Vector *vector, u32 *value, LobbyTag tag);
extern void LobbyU32Vector_AppendFillSlow(LobbyU32Vector *vector, u32 count, u32 *value);
extern u32 *LobbyU32Vector_Data2(LobbyU32Vector *vector);
extern void LobbyU32VectorBuffer_Allocate(LobbyU32VectorBuffer *buffer, u32 capacity, LobbyTag tag);
extern LobbyU32VectorBuffer *LobbyU32VectorBuffer_Destroy(LobbyU32VectorBuffer *buffer);
extern LobbyStringVector *LobbyStringVector_Destroy(LobbyStringVector *vector);
extern LobbyCharVectorBuffer *LobbyCharVectorBuffer_Destroy(LobbyCharVectorBuffer *);
extern void LobbyCharVectorBuffer_Allocate(LobbyCharVectorBuffer *, u32, LobbyTag);
extern void LobbyStringVector_EraseAtEnd(LobbyStringVector *, u32, LobbyTag);
extern void LobbyStringVectorBuffer_Allocate(LobbyStringVectorBuffer *, u32, LobbyTag);
extern LobbyStringVectorBuffer *LobbyStringVectorBuffer_Deallocate(LobbyStringVectorBuffer *);
extern LobbyStringVectorBuffer *LobbyStringVectorBuffer_Destroy(LobbyStringVectorBuffer *);
}
namespace LobbyStringTypes {
    class RangeDispatch {};
} // namespace LobbyStringTypes
namespace LobbyCharVectorTypes {
    class ResizeDispatch {};
    class Allocator {
    public:
        u32 recommend(LobbyCharVector *vector, u32 growth);
    };
} // namespace LobbyCharVectorTypes
extern "C" {
extern void LobbyCharVector_AppendZerosSlow(LobbyCharVector *, u32);
extern void LobbyCharVector_AppendZeros(LobbyCharVector *, u32, LobbyCharVectorTypes::ResizeDispatch);
extern Str *LobbyString_ReplaceRange(Str *, u32, u32, const char *, const char *, LobbyStringTypes::RangeDispatch);
}
inline u32 LobbyCharVectorTypes::Allocator::recommend(LobbyCharVector *vector, u32 growth) {
    return LobbyCharVector_RecommendSize(vector, growth);
}
struct StringSearchRange {
    const s8 *data;
    u32 size;
    inline StringSearchRange(const s8 *p, u32 n) :
        data(p),
        size(n) {}
};
typedef struct StringSearch {
    union {
        struct {
            u32 flag : 1, capacity : 31;
            u32 size;
            s8 *data;
        } longForm;
        struct {
            u8 flag : 1, size : 7;
            s8 data[11];
        } shortForm;
    } raw;

    inline StringSearchRange GetRange() const;
    inline int Find(const StringSearch &other, u32 start) const;

} StringSearch;
typedef char StringSearchSize12[sizeof(StringSearch) == 12 ? 1 : -1];
extern "C" {
extern int LobbyString_Find(const StringSearch *, const StringSearch *, u32);
extern u32 LobbyString_FindChars(const StringSearch *s, const s8 *needle, u32 start, u32 count);
}
typedef struct LobbyRequest LobbyRequest;
typedef struct LobbyRequestVtable {
    void (*destroy)(LobbyRequest *request);
    LobbyRequest *(*destroyAndFree)(LobbyRequest *request);
    u32 (*getId)(LobbyRequest *request);
    u32 (*getParam)(LobbyRequest *request);
} LobbyRequestVtable;
struct LobbyRequest {
    LobbyRequestVtable *vtable;
    u32 id;
    u32 param;
};
typedef void (*LobbyEnterChannelCallback)(BOOL success, int error, const char *channel, u32 param);
typedef void (*LobbyGetChannelModeCallback)(BOOL success, const char *channel, u32 mode, u32 param);
typedef void (*LobbyGetChannelKeysCallback)(BOOL success, const char *channel, int userId, const char *key, const char *value,
                                            u32 param);
typedef void (*LobbyEnumChannelsCallback)(BOOL success, u32 count, const char *channels, u32 topics, u32 userCounts,
                                          u32 param);
typedef void (*LobbyEnumUsersCallback)(BOOL success, const char *channel, u32 count, void *userIds, u32 param);
typedef struct LobbyRequestMapNode {
    struct LobbyRequestMapNode *left;
    struct LobbyRequestMapNode *right;
    struct LobbyRequestMapNode *parent;
    LobbyRequest *request;
} LobbyRequestMapNode;
typedef struct LobbyRequestMap {
    u32 count;
    LobbyRequestMapNode *root;
    LobbyRequestMapNode *leftmost;
} LobbyRequestMap;
typedef struct LobbyRequestMapInsertResult {
    LobbyRequestMapNode *node;
    u8 inserted;
} LobbyRequestMapInsertResult;
extern "C" {
extern LobbyRequestVtable gLobbyRequestVtable;
extern LobbyRequestVtable gLobbyGetChannelModeRequestVtable;
extern LobbyRequestVtable gLobbyGetChannelKeysRequestVtable;
extern LobbyRequestVtable gLobbyEnterChannelRequestVtable;
extern LobbyRequestVtable gLobbyEnumUsersRequestVtable;
extern LobbyRequestVtable gLobbyEnumChannelsRequestVtable;
extern void *LobbyRequestMap_Destroy(LobbyRequestMap *map);
extern void LobbyRequestMap_DestroyNodes(LobbyRequestMap *map, LobbyRequestMapNode *node);
extern LobbyRequestMapNode *LobbyRequestMap_InsertNode(LobbyRequestMap *map, LobbyRequestMapNode *parent, int left,
                                                       int leftmost, LobbyRequest *const *request);
}
struct LobbyCallbackRequest : LobbyRequest {
    u32 callback;
};
struct LobbyChatRequest {
    virtual void destroy();
    virtual LobbyChatRequest *destroyAndFree();
    virtual u32 getId();
    virtual u32 getParam();
    u32 id;
    u32 param;
};
struct LobbyEnterChannelRequest : LobbyChatRequest {
    LobbyEnterChannelCallback callback;
};
struct LobbyGetChannelModeRequest : LobbyChatRequest {
    LobbyGetChannelModeCallback callback;
};
struct LobbyGetChannelKeysRequest : LobbyChatRequest {
    LobbyGetChannelKeysCallback callback;
};
struct LobbyEnumChannelsRequest : LobbyChatRequest {
    LobbyEnumChannelsCallback callback;
};
struct LobbyEnumUsersRequest : LobbyChatRequest {
    LobbyEnumUsersCallback callback;
};
struct LobbyRequestMapIterator {
    LobbyRequestMapNode *node;

    LobbyRequestMapIterator() {}

    LobbyRequestMapIterator(LobbyRequestMapNode *node) :
        node(node) {}
};
extern "C" {
extern void LobbyRequestMap_Insert(LobbyRequestMapInsertResult *out, LobbyRequestMap *map, LobbyCallbackRequest **val);
extern LobbyRequestMapIterator LobbyRequestMap_Find(LobbyRequestMap *, LobbyRequest *const &);
extern void LobbyRequestMap_DeleteKey(LobbyRequestMap *map, u32 id);
}
typedef BOOL (*LobbyTimerCallback)(void *param);
typedef struct LobbyTimer {
    s64 lastTime;
    s64 interval;
    void *param;
    LobbyTimerCallback callback;
} LobbyTimer;
typedef struct LobbyTimerMapEntry {
    u32 id;
    LobbyTimer timer;
} LobbyTimerMapEntry;
typedef struct LobbyTimerMapNode {
    struct LobbyTimerMapNode *left;
    struct LobbyTimerMapNode *right;
    struct LobbyTimerMapNode *parent;
    u32 id;
    LobbyTimer timer;
} LobbyTimerMapNode;
typedef struct LobbyTimerMap {
    u32 count;
    LobbyTimerMapNode *root;
    u8 padding_08[4];
    LobbyTimerMapNode *leftmost;
} LobbyTimerMap;
extern "C" {
extern void LobbyTimerMap_MakeEntry(LobbyTimerMapEntry *entry, int id, LobbyTimer *timer);
extern void LobbyTimerMap_Find(LobbyTimerMapNode **out, LobbyTimerMap *map, u32 *key);
extern BOOL LobbyTimerMap_EraseKey(LobbyTimerMap *map, u32 *id);
extern LobbyTimerMapNode *LobbyTimerMap_LowerBound(LobbyTimerMap *, u32 *, LobbyTimerMapNode *, LobbyTimerMapNode *);
extern LobbyTimerMapNode *func_0201a404(LobbyTimerMap *map, const u32 *key, LobbyTimerMapNode **last, u8 *left, u8 *first);
extern void LobbyTimerMap_Clear(LobbyTimerMap *map);
extern void *LobbyTimerMap_Destroy(LobbyTimerMap *map);
}
typedef struct Iterator {
    void *current;

    void Advance();

} Iterator;
typedef char DwcTreeIteratorSize4[sizeof(Iterator) == 4 ? 1 : -1];
typedef struct LobbyUserIdSetNode {
    struct LobbyUserIdSetNode *left;
    struct LobbyUserIdSetNode *right;
    u32 parent;
    int userId;
} LobbyUserIdSetNode;
typedef struct LobbyUserIdSet {
    int count;
    LobbyUserIdSetNode *root;
    LobbyUserIdSetNode *first;
} LobbyUserIdSet;
typedef struct LobbyUserIdSetInsertResult {
    LobbyUserIdSetNode *node;
    u8 inserted;
} LobbyUserIdSetInsertResult;
typedef struct LobbyUserMapEntry {
    int userId;
    Str nick;
} LobbyUserMapEntry;
typedef struct LobbyUserMapNode {
    struct LobbyUserMapNode *left;
    struct LobbyUserMapNode *right;
    u32 parent;
    LobbyUserMapEntry entry;
} LobbyUserMapNode;
typedef struct LobbyUserMap {
    int count;
    LobbyUserMapNode *root;
    u8 padding_08[4];
    LobbyUserMapNode *first;
} LobbyUserMap;
typedef struct LobbyUserMapInsertResult {
    LobbyUserMapNode *node;
    u8 inserted;
} LobbyUserMapInsertResult;
extern "C" {
extern void LobbyUserIdSet_Assign(LobbyUserIdSet *set, LobbyUserIdSet *other);
extern void LobbyUserIdSet_CopyNodes(LobbyUserIdSet *set, LobbyUserIdSetNode *parent, LobbyUserIdSetNode *src, BOOL left);
extern void *LobbyUserIdSet_Destroy(LobbyUserIdSet *set);
extern void *LobbyUserIdSet_Destroy2(LobbyUserIdSet *set);
extern void LobbyUserIdSet_DestroyNodes(LobbyUserIdSet *set, LobbyUserIdSetNode *node);
extern void LobbyUserIdSet_Erase(Iterator *out, LobbyUserIdSet *set, Iterator node);
extern int LobbyUserIdSet_EraseKey(LobbyUserIdSet *set, const int *key);
extern void LobbyUserIdSet_Find(Iterator *out, LobbyUserIdSet *set, const int *key);
extern LobbyUserIdSetNode *LobbyUserIdSet_FindInsertPos(LobbyUserIdSet *set, int *key, LobbyUserIdSetNode **prev, u8 *left,
                                                        u8 *first);
extern void LobbyUserIdSet_Insert(LobbyUserIdSetInsertResult *out, LobbyUserIdSet *set, int *key);
extern LobbyUserIdSetNode *LobbyUserIdSet_InsertNode(LobbyUserIdSet *set, LobbyUserIdSetNode *parent, int left, int last,
                                                     const int *key);
extern void LobbyUserIdSet_Swap(LobbyUserIdSet *, LobbyUserIdSet *);
extern void *LobbyUserMap_Destroy(LobbyUserMap *map);
extern BOOL LobbyUserMap_EraseKey(LobbyUserMap *map, int *key);
extern void LobbyUserMap_DestroyNodes(LobbyUserMap *map, LobbyUserMapNode *node);
extern void LobbyUserMap_Erase(Iterator *out, LobbyUserMap *map, Iterator node);
extern LobbyUserMapNode *LobbyUserMap_FindInsertPos(LobbyUserMap *map, int *key, LobbyUserMapNode **prev, u8 *left, u8 *first);
extern void LobbyUserMap_Insert(LobbyUserMapInsertResult *out, LobbyUserMap *map, LobbyUserMapEntry *entry);
extern LobbyUserMapNode *LobbyUserMap_InsertNode(LobbyUserMap *map, LobbyUserMapNode *parent, int left, int first,
                                                 LobbyUserMapEntry *entry);
}
typedef struct LobbyChatCallbacks {
    void (*onMessage)();
    void (*onExcessFlood)();
    void *param;
} LobbyChatCallbacks;
typedef struct LobbyChannelCallbacks {
    void (*onUserJoined)(const char *channel, int userId, void *param);
    void (*onUserParted)(const char *channel, int userId, void *param);
    void (*onChannelMessage)(const char *channel, int userId, void *message, void *param);
    void (*onBroadcastKeyChanged)(const char *channel, int userId, void *key, void *value, void *param);
    void (*onTopicChanged)(const char *channel, void *topic, void *param);
    void *param;
} LobbyChannelCallbacks;
typedef struct LobbyChannel {
    BOOL usersEnumerated;
    LobbyUserIdSet users;
    int userLimit;
    LobbyChannelCallbacks callbacks;
} LobbyChannel;
typedef struct LobbyChannelMapEntry {
    Str name;
    LobbyChannel channel;
} LobbyChannelMapEntry;
typedef struct LobbyChannelMapNode {
    struct LobbyChannelMapNode *left;
    struct LobbyChannelMapNode *right;
    u32 parent;
    LobbyChannelMapEntry entry;
} LobbyChannelMapNode;
typedef struct LobbyChannelMap {
    int count;
    LobbyChannelMapNode *root;
    u8 padding_08[4];
    LobbyChannelMapNode *first;
} LobbyChannelMap;
typedef struct LobbyChannelMapInsertResult {
    LobbyChannelMapNode *node;
    u8 inserted;
} LobbyChannelMapInsertResult;
struct ChatConnection;
typedef struct LobbyChatManager {
    struct ChatConnection *connection;
    enum LobbyChatState state;
    int userId;
    Str nick;
    Str user;
    Str realName;
    Str gameName;
    Str gameKey;
    Str channelPrefix;
    u32 unk54;
    enum PPWLobbyError lastError;
    int connectedFrames;
    BOOL disconnected;
    LobbyChatCallbacks callbacks;
    LobbyUserMap userMap;
    LobbyChannelMap channelMap;
    LobbyRequestMap requestMap;
    LobbyTimerMap timerMap;
} LobbyChatManager;
struct ChatChannelMode;
extern "C" {
extern LobbyChatManager *gLobbyChatManager;
extern void *LobbyChannelMap_Destroy(LobbyChannelMap *map);
extern void LobbyChannelMap_DestroyNodes(LobbyChannelMap *map, LobbyChannelMapNode *node);
extern void LobbyChannelMap_Erase(Iterator *out, LobbyChannelMap *map, Iterator node);
extern int LobbyChannelMap_EraseKey(LobbyChannelMap *map, Str *key);
extern void LobbyChannelMap_Find(Iterator *out, LobbyChannelMap *map, Str *key);
extern LobbyChannelMapNode *LobbyChannelMap_FindInsertPos(LobbyChannelMap *map, Str *key, LobbyChannelMapNode **found,
                                                          u8 *left, u8 *empty);
extern void LobbyChannelMap_Insert(LobbyChannelMapInsertResult *out, LobbyChannelMap *map, LobbyChannelMapEntry *entry);
extern LobbyChannelMapNode *LobbyChannelMap_InsertNode(LobbyChannelMap *, LobbyChannelMapNode *, u8, u8,
                                                       LobbyChannelMapEntry *);
extern void LobbyChatManager_GetNick(Str *out, LobbyChatManager *manager);
extern int LobbyChat_FindUserIdByNick(LobbyChatManager *manager, const Str *nick);
extern void LobbyChat_StripChannelPrefix(Str *out, LobbyChatManager *manager, Str *name);
extern LobbyChannelCallbacks *LobbyChat_GetChannelCallbacks(LobbyChatManager *manager, Str *key);
extern BOOL LobbyChat_SetChannelUsersEnumerated(LobbyChatManager *manager, Str *channel);
extern int LobbyChat_GetChannelUserLimit(LobbyChatManager *manager, Str *channel);
extern int LobbyChat_AddChannelUser(LobbyChatManager *manager, Str *nick, Str *channel);
extern BOOL LobbyChat_RemoveUserIfUnused(LobbyChatManager *manager, int userId);
extern enum PPWLobbyResult LobbyChat_LeaveChannel(const char *channel);
extern enum LobbyChatState LobbyChat_Process(void);
extern enum PPWLobbyResult LobbyChat_Shutdown(void);
extern enum PPWLobbyError LobbyChat_GetLastError(void);
extern int LobbyChat_ToErrorCode(int error);
extern BOOL LobbyChat_IsInChannel(char *channel);
extern enum PPWLobbyResult LobbyChat_SetChannelMode(const char *channel, const struct ChatChannelMode *mode);
extern enum PPWLobbyResult LobbyChat_SendChannelMessage(const char *channel, const char *message);
extern enum PPWLobbyResult LobbyChat_SendUserMessage(int userId, const char *message);
extern enum PPWLobbyResult LobbyChat_SetChannelKey(const char *channel, int userId, const char *key, const char *value);
extern enum PPWLobbyResult LobbyChat_GetChannelKeysAsync(const char *channel, int userId, const char *key,
                                                         LobbyGetChannelKeysCallback callback, u32 param);
extern Str LobbyChat_GetFullChannelName(LobbyChatManager *manager, const Str &name);
extern Str LobbyChat_GetUserNick(LobbyChatManager *manager, int userId);
}
struct AssignTag {};
struct IteratorTag {};
struct RangeTag {};
struct TrueTag {};
struct ByteIterator {
    const u8 *p;
    u32 extra;

    ByteIterator(const u8 *q) :
        p(q) {}
};
struct ByteAllocator {
    u8 unused;
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
typedef struct LobbyEventVector {
    LobbyEvent *data;
    u32 size;
    u32 capacity;
} LobbyEventVector;
typedef struct LobbyEventDequeMapBuffer {
    LobbyEventDequeMap map;
    u32 *allocator;
} LobbyEventDequeMapBuffer;
typedef struct LobbyEventDeque {
    u32 start;
    u32 size;
    LobbyEventDequeMap map;
} LobbyEventDeque;
typedef struct LobbyEventDequeIterator {
    LobbyEventDequeMapIterator block;
    LobbyEvent *cur;

    LobbyEventDequeIterator(const LobbyEventDequeIterator &other) {
        block.cur   = other.block.cur;
        block.first = other.block.first;
        block.mid   = other.block.mid;
        block.last  = other.block.last;
        cur         = other.cur;
    }

    LobbyEvent *SegmentEnd() const {
        return cur ? *block.cur + 128 : cur;
    }

    LobbyEventDequeIterator &operator++() {
        LobbyEvent **m = block.cur;
        if (++cur == *m + 128) {
            if (++block.cur == block.last) {
                block.cur = block.first;
            }
            cur = *block.cur;
        }
        return *this;
    }

    LobbyEventDequeIterator &operator+=(int n) {
        cur += n - 1;
        return ++*this;
    }

} LobbyEventDequeIterator;
typedef struct LobbyEventVectorIterator {
    LobbyEvent *p;

    LobbyEventVectorIterator() {}

    LobbyEventVectorIterator(LobbyEvent *q) :
        p(q) {}

    LobbyEvent *base() const {
        return p;
    }

    LobbyEventVectorIterator &operator+=(int n) {
        p += n;
        return *this;
    }

    bool operator!=(const LobbyEventVectorIterator &o) const {
        return p != o.p;
    }

    int operator-(const LobbyEventVectorIterator &o) const {
        return p - o.p;
    }

    LobbyEventVectorIterator operator+(int n) const {
        LobbyEventVectorIterator t(*this);
        t.p += n;
        return t;
    }

} LobbyEventVectorIterator;
typedef struct LobbySortTemporaryBuffer {
    LobbyEvent *data;
    int count;
} LobbySortTemporaryBuffer;
extern "C" {
extern u32 gLobbyDequeMaxSizeInit;
extern u32 gLobbyDequeMaxSize;
extern u32 gLobbyEventDequeMapMaxSizeSet;
extern u32 gLobbyEventDequeMapMaxSize;
extern u32 gLobbyEventDequeMapBufferMaxSizeSet;
extern u32 gLobbyEventDequeMapBufferMaxSize;
extern char gLobbyStr_DequeLengthError[];
extern char gLobbyStr_CdequeLengthError[];
extern LobbyEventDeque *LobbyEventDeque_Destroy(LobbyEventDeque *deque);
extern LobbyEventDeque *LobbyEventDeque_Destroy2(LobbyEventDeque *deque);
extern void LobbyEventDeque_AddBackCapacity(LobbyEventDeque *deque, u32 count);
extern void LobbyEventDeque_EraseAtBegin(LobbyEventDeque *deque, u32 count, LobbyTag tag);
extern void LobbyEventDeque_EraseAtEnd(LobbyEventDeque *deque, u32 count, LobbyTag tag);
extern void LobbyEventDeque_LengthError(const char *message);
extern LobbyEventDequeMap *LobbyEventDequeMap_Destroy(LobbyEventDequeMap *map);
extern void LobbyEventDequeMap_Allocate(LobbyEventDequeMap *map, u32 capacity, LobbyTag tag);
extern LobbyEventDequeMapIterator *LobbyEventDequeMapIterator_Advance2(LobbyEventDequeMapIterator *it, int n);
extern int LobbyEventDequeMapIterator_Distance2(const LobbyEventDequeMapIterator *a, const LobbyEventDequeMapIterator *b);
extern void LobbyEventDequeMap_Reserve(LobbyEventDequeMap *map, u32 size);
extern u32 LobbyEventDequeMap_RecommendSize(LobbyEventDequeMap *map, u32 extra);
extern void LobbyEventDequeMap_LengthError(void);
extern LobbyEventDequeMapBuffer *LobbyEventDequeMapBuffer_Destroy(LobbyEventDequeMapBuffer *buffer);
extern void LobbyEventDequeMapBuffer_Allocate(LobbyEventDequeMapBuffer *buffer, u32 capacity, LobbyTag tag);
extern void LobbyEventVector_Allocate(LobbyEventVector *vector, u32 capacity, LobbyTag tag);
extern void LobbyEventVector_Reallocate(LobbyEventVector *vector, u32 unused, u32 capacity);
extern u32 LobbyEventVector_RecommendSize(LobbyEventVector *vector, u32 extra);
extern void LobbyEventVector_AssignRange(LobbyEventVector *vector, const LobbyEvent *first, const LobbyEvent *last,
                                         LobbyTag tag);
extern void LobbySort_GetTemporaryBuffer(LobbySortTemporaryBuffer *buffer, int n);
extern LobbyEventDequeIterator LobbyEventDeque_IteratorAt(LobbyEventDeque *deque, u32 index);
extern void LobbyEventDeque_AppendRange(LobbyEventDeque *deque, LobbyEventVectorIterator *first,
                                        const LobbyEventVectorIterator &last, LobbyTag tag);
extern void LobbyEventDeque_Assign(LobbyEventDeque *deque, LobbyEventVectorIterator first,
                                   const LobbyEventVectorIterator &last, LobbyTag tag);
extern LobbyEventDequeIterator LobbyEventDeque_Copy(LobbyEventVectorIterator first, LobbyEventVectorIterator last,
                                                    LobbyEventDequeIterator result);
extern LobbyEventDequeIterator LobbyEventDeque_UninitializedCopy(LobbyEventVectorIterator first, LobbyEventVectorIterator last,
                                                                 LobbyEventDequeIterator result, LobbyTag tag, u32 *count);
extern void LobbyEventDequeMapBuffer_AppendRange(LobbyEventDequeMapBuffer *buffer, const LobbyEventDequeMapIterator &first,
                                                 const LobbyEventDequeMapIterator &last, LobbyTag tag);
extern void LobbyEventDequeMapBuffer_PrependRange(LobbyEventDequeMapBuffer *buffer, const LobbyEventDequeMapIterator &first,
                                                  const LobbyEventDequeMapIterator &last, LobbyTag tag);
}
typedef struct PPWLobbyCallbacks {
    void (*onEnterChannel)(int result, u32 channel);
    void (*onPlayerEnter)(int userId, const void *systemProfile, const void *userProfile, u32 userProfileSize);
    void (*onPlayerLeave)(int userId);
    void (*onStringMessage)(int userId, int channel, int type, const void *text);
    void (*onMessage)(int userId, u32 channel, u32 type, const void *data, u32 size);
    void (*onLocationsChanged)(BOOL success, BOOL broadcast, int channel, int userId, const char *key, const void *data,
                               u32 size, u32 param);
    void (*onPlayerRecordChanged)(int userId, const void *systemProfile);
    void (*onPlayerUpdate)(int userId, const void *userProfile, u32 size);
    void (*onMatchInfo)(int userId, void *info);
    void (*onMatchClosed)(int userId, const void *info);
    void (*onLobbyEvent)(u32 event);
    void (*onOwnRecord)(enum PPWLobbyWebResult result, const void *record, u32 size);
    BOOL (*onScheduleReceived)(enum PPWLobbyWebResult result, const void *schedule);
    void (*onSpecialVisitorsReceived)(enum PPWLobbyWebResult result, const void *records, u32 count);
    void (*onSurveyReceived)(enum PPWLobbyWebResult result, const void *questionnaire);
    void (*onSurveySubmitted)(s32 result);
    void (*onExcessFlood)(int userId);
} PPWLobbyCallbacks;
typedef struct PPWLobbyChannel {
    enum PPWLobbyChannelKind kind;
    Str name;
    BOOL usersEnumerated;
    BOOL modeReady;
} PPWLobbyChannel;
typedef struct PPWLobbyTime {
    s64 seconds;
} PPWLobbyTime;
typedef struct PPWLobbySystemProfile {
    enum PPWLobbyChannelKind channel;
    PPWLobbyTime time;
    u32 unk_0C;
} PPWLobbySystemProfile;
typedef struct PPWLobbyPlayer PPWLobbyPlayer;
typedef struct PPWLobbyPlayerVtable {
    PPWLobbyPlayer *(*destroy)(PPWLobbyPlayer *player);
    void *(*destroyAndFree)(PPWLobbyPlayer *player);
} PPWLobbyPlayerVtable;
struct PPWLobbyPlayer {
    const PPWLobbyPlayerVtable *vtable;
    PPWLobbySystemProfile systemProfile;
    BOOL systemProfileChanged;
    LobbyCharVector userProfile;
    BOOL userProfileChanged;
    enum PPWLobbyPlayerState state;
    int id;
    BOOL systemProfileReceived;
    BOOL userProfileReceived;
    BOOL entered;
};
typedef struct PPWLobbyPlayerSetNode {
    struct PPWLobbyPlayerSetNode *left;
    struct PPWLobbyPlayerSetNode *right;
    u32 parent;
    PPWLobbyPlayer *player;
} PPWLobbyPlayerSetNode;
typedef struct PPWLobbyPlayerSet {
    u32 count;
    PPWLobbyPlayerSetNode *root;
    PPWLobbyPlayerSetNode *leftmost;
} PPWLobbyPlayerSet;
typedef struct PPWLobbyPlayerSetInsertResult {
    PPWLobbyPlayerSetNode *node;
    u8 inserted;
} PPWLobbyPlayerSetInsertResult;
typedef struct PPWLobbyPlayers {
    const void *vtable;
    PPWLobbyPlayerSet playerSet;
    PPWLobbyPlayer self;
} PPWLobbyPlayers;
typedef struct PPWLobbyVipRecord {
    u32 id;
    u32 value;
} PPWLobbyVipRecord;
typedef struct PPWLobbyVipVector {
    PPWLobbyVipRecord *data;
    u32 size;
    u32 capacity;
} PPWLobbyVipVector;
typedef struct PPWLobbyScheduleRecord {
    u32 lockTime;
    u32 unk_04;
    u32 roomFlag;
    u8 roomType;
    u8 season;
    u16 eventCount;
    LobbyEvent events[1];
} PPWLobbyScheduleRecord;
typedef struct PPWLobbySchedule {
    enum PPWLobbyScheduleState state;
    BOOL hasTime;
    PPWLobbyTime time;
    s64 startTime;
    BOOL startRequested;
    u32 lockTime;
    u32 unk_20;
    u32 roomFlag;
    u8 roomType;
    u8 season;
    LobbyEventVector events;
    LobbyEventDeque pendingEvents;
    PPWLobbyVipVector vips;
    u8 questionnaire[0x2D8];
    BOOL hasQuestionnaire;
} PPWLobbySchedule;
typedef struct PPWLobbyRecruitInfo {
    int index;
    int maxPlayers;
    int playerCount;
    int state;
    struct {
        u8 bytes[32];
    } params;
    struct {
        char text[20];
    } name;
} PPWLobbyRecruitInfo;
typedef struct PPWLobbyWork {
    enum PPWLobbyState state;
    enum PPWLobbyError error;
    PPWLobbyCallbacks callbacks;
    u32 userId;
    u32 prefix;
    u32 unk_54;
    Str channelBaseName;
    BOOL isNewChannel;
    BOOL recruiting;
    BOOL submittingQuestionnaire;
    u32 unk_70;
    PPWLobbyRecruitInfo recruitInfo;
    PPWLobbyChannel mainChannel;
    PPWLobbyChannel subChannel;
    PPWLobbyPlayers players;
    LobbyTimerMap timers;
    PPWLobbySchedule schedule;
} PPWLobbyWork;
typedef struct PPWLobbyTimeInfo {
    s64 currentTime;
    PPWLobbyTime channelTime;
    s64 startTime;
} PPWLobbyTimeInfo;
typedef struct PPWLobbyWebRequest PPWLobbyWebRequest;
typedef void (*PPWLobbyWebCallback)(BOOL success, u8 *data, u32 size, void *param);
typedef struct PPWLobbyWebRequestVtable {
    void *unk_00;
    void (*destroy)(PPWLobbyWebRequest *request);
} PPWLobbyWebRequestVtable;
struct PPWLobbyWebRequest {
    const PPWLobbyWebRequestVtable *vtable;
    int retries;
    int server;
    Str key;
    Str page;
    int pid;
    LobbyCharVector body;
    PPWLobbyWebCallback callback;
    void *param;
    BOOL useLastHash;
};
struct ChatChannelMode;
struct DwcUserData;
extern "C" {
extern PPWLobbyWork *gPPWLobbyWork;
extern const struct ChatChannelMode gPPWLobbyMainChannelMode;
extern const struct ChatChannelMode gPPWLobbyMainChannelSecretMode;
extern const struct ChatChannelMode gPPWLobbyFootChannelMode;
extern const struct ChatChannelMode gPPWLobbyClockChannelMode;
extern const struct ChatChannelMode gPPWLobbyNewsChannelMode;
extern PPWLobbyWork *PPWLobby_GetWork(void);
extern enum PPWLobbyResult PPWLobby_Initialize(const char *, const char *, int, const PPWLobbyCallbacks *, u32, const void *,
                                               u32, u32);
extern Str *PPWLobby_GetChannelBaseName(Str *out, PPWLobbyWork *work);
extern void PPWLobbyChannel_GetName(Str *out, PPWLobbyChannel *channel);
extern void PPWLobby_GetChannelName(Str *out, PPWLobbyChannel *channels, int subChannel);
extern PPWLobbyPlayer *PPWLobbyPlayer_Destroy(PPWLobbyPlayer *player);
extern PPWLobbyPlayers *PPWLobbyPlayers_Destroy(PPWLobbyPlayers *players);
extern PPWLobbyWebRequest *PPWLobbyWebRequest_Delete(PPWLobbyWebRequest *request);
extern void *PPWLobbyWebRequest_Destroy(PPWLobbyWebRequest *request);
extern void *PPWLobbyPlayers_Delete(PPWLobbyPlayers *players);
extern void *PPWLobbyPlayer_Delete(PPWLobbyPlayer *player);
extern void *PPWLobbyPlayerSet_Destroy(PPWLobbyPlayerSet *set);
extern void PPWLobbyPlayerSet_DestroyNodes(PPWLobbyPlayerSet *set, PPWLobbyPlayerSetNode *node);
extern void PPWLobbyPlayerSet_Erase(Iterator *out, PPWLobbyPlayerSet *set, Iterator position);
extern void PPWLobby_GenerateChannelBaseName(Str *out);
extern enum PPWLobbyWebResult PPWLobby_GetWebResultError(u32 type);
extern BOOL PPWLobby_HandleLibraryData(BOOL success, BOOL broadcast, int kind, int userId, const char *key, const u8 *data,
                                       u32 len, u32 param);
extern void PPWLobby_HandleReceivedData(BOOL success, BOOL broadcast, const char *channel, int userId, const char *key,
                                        const char *value, u32 param);
extern void PPWLobby_OnCheckProfile(BOOL success, u8 *response, u32 responseSize, void *param);
extern void PPWLobby_OnEnterSubChannel(BOOL success, int error, const char *channel, int kind);
extern void PPWLobby_OnEnumChannels(int, int, char **, int, int *);
extern void PPWLobby_OnExcessFlood(int);
extern void PPWLobby_OnGetChannelKeys(BOOL success, const char *channel, int userId, const char *key, const char *value,
                                      u32 param);
extern void PPWLobby_OnGetChannelTime(BOOL result, const char *channel, int userId, const char *key, const char *value,
                                      u32 param);
extern void PPWLobby_OnGetLobbyData(BOOL success, const char *channel, int userId, const char *key, const char *value,
                                    u32 param);
extern void PPWLobby_OnGetQuestionnaire(BOOL success, u8 *response, u32 responseSize, void *param);
extern void PPWLobby_OnGetSchedule(BOOL success, u8 *response, u32 responseSize, void *param);
extern void PPWLobby_OnGetVip(BOOL success, u8 *response, u32 responseSize, void *param);
extern void PPWLobby_OnPlayerMessage(int, int, int);
extern void PPWLobby_OnSubmitQuestionnaire(BOOL status, u8 *data, u32 size, void *param);
extern void PPWLobby_OnTopicChanged(void);
extern enum PPWLobbyWebResult PPWLobby_ParseWebResponse(BOOL valid, u8 *data, u32 size, void **output, u32 *length);
extern enum PPWLobbyResult PPWLobby_SetChannelData(int userId, enum PPWLobbyChannelKind kind, const char *key,
                                                   const void *data, u32 size);
extern void PPWLobby_StartCheckProfile(void);
extern BOOL PPWLobby_TimerPollChannelMode(void);
extern BOOL PPWLobby_TimerRequestChannelTime(void);
extern BOOL PPWLobby_TimerRequestLobbyData(void);
extern BOOL PPWLobby_TimerSendRecruitInfo(void);
extern BOOL PPWLobby_TimerUploadSystemProfile(void);
extern BOOL PPWLobby_TimerUploadUserProfile(void);
extern enum PPWLobbyResult PPW_LobbyInitializeAsync(const char *gameName, const char *secretKey, int prefix,
                                                    const PPWLobbyCallbacks *callbacks, const struct DwcUserData *userData,
                                                    const void *playerData, u32 playerDataSize);
extern enum PPWLobbyResult PPW_LobbyShutdownAsync(void);
extern enum PPWLobbyState PPW_LobbyProcess(void);
extern enum PPWLobbyResult PPW_LobbyJoinSubChannelAsync(int channel);
extern enum PPWLobbyResult PPW_LobbyLeaveSubChannel(void);
extern enum PPWLobbyChannelState PPW_LobbyGetSubChannelState(void);
extern int PPW_LobbyGetMyUserId(void);
extern enum PPWLobbyResult PPW_LobbySendChannelBinaryMessage(int channel, int type, const void *data, int size);
extern enum PPWLobbyResult PPW_LobbySendPlayerBinaryMessage(int userId, int type, const void *data, int size);
extern enum PPWLobbyResult PPW_LobbySetChannelData(int userId, enum PPWLobbyChannelKind channel, const char *key,
                                                   const void *data, u32 size);
extern enum PPWLobbyResult PPW_LobbyGetChannelDataAsync(int userId, enum PPWLobbyChannelKind channel, const char *key,
                                                        u32 param);
extern enum PPWLobbyResult PPW_LobbyUpdateMyProfile(const void *data, u32 size, int force);
extern enum PPWLobbyResult PPW_LobbyGetTimeInfo(PPWLobbyTimeInfo *timeInfo);
extern enum PPWLobbyResult PPW_LobbyGetSchedule(PPWLobbyScheduleRecord *records, u32 *size);
extern enum PPWLobbyResult PPW_LobbySubmitQuestionnaire(int mode);
extern enum PPWLobbyError PPW_LobbyGetLastError(void);
extern enum PPWLobbyError PPW_LobbyInitResultToLastError(int result);
extern int PPW_LobbyToErrorCode(int error);
extern enum PPWLobbyResult PPWLobby_SendMessage(int id, int channel, enum PPWLobbyMessageFormat type,
                                                enum PPWLobbyMessageKind mode, int arg, const void *data, u32 size);
extern BOOL PPWLobbySchedule_GetQuestionnaire(PPWLobbySchedule *schedule, void *out);
extern BOOL PPWLobbySchedule_SetQuestionnaire(PPWLobbySchedule *schedule, const void *in);
extern void PPWLobbySchedule_Process(PPWLobbySchedule *schedule);
extern BOOL PPWLobbySchedule_CanStart(PPWLobbySchedule *schedule);
extern BOOL PPWLobbySchedule_Start(PPWLobbySchedule *schedule);
extern PPWLobbySchedule *PPWLobbySchedule_Init(PPWLobbySchedule *schedule);
extern BOOL PPWLobbySchedule_Copy(PPWLobbySchedule *schedule, PPWLobbyScheduleRecord *out, u32 *size);
extern void PPWLobbySchedule_CopyToVector(LobbyCharVector *out, PPWLobbySchedule *schedule);
extern LobbyEvent *LobbyEventVector_Data(LobbyEventVector *vector);
extern LobbyEventVector *LobbyEventVector_Destroy(LobbyEventVector *vector);
extern PPWLobbyVipVector *LobbyVipVector_Destroy(PPWLobbyVipVector *vector);
extern void LobbyVipVector_Allocate(PPWLobbyVipVector *vector, u32 capacity, LobbyTag tag);
extern void LobbyVipVector_Reallocate(PPWLobbyVipVector *vector, u32 unused, u32 capacity);
extern void LobbyVipVector_AssignRange(PPWLobbyVipVector *vector, const PPWLobbyVipRecord *first,
                                       const PPWLobbyVipRecord *last, LobbyTag tag);
extern u32 LobbyVipVector_RecommendSize(PPWLobbyVipVector *vector, u32 extra);
extern BOOL PPWLobbySchedule_IsSizeValid(PPWLobbySchedule *schedule, const void *data, u32 size);
extern BOOL PPWLobbySchedule_Load(PPWLobbySchedule *schedule, const void *data, u32 size);
extern BOOL PPWLobbySchedule_ValidateVipRecords(PPWLobbySchedule *schedule, const void *data, u32 size);
extern BOOL PPWLobbySchedule_SetVipRecords(PPWLobbySchedule *schedule, const void *data, u32 size);
extern void PPWLobbyPlayers_Clear(PPWLobbyPlayers *);
extern void PPWLobbyPlayers_UpdateStates(PPWLobbyPlayers *);
extern void PPWLobbyPlayer_UpdateState(PPWLobbyPlayer *player);
extern BOOL PPWLobbyPlayers_AllHaveProfiles(PPWLobbyPlayers *players);
extern BOOL PPWLobbyPlayers_IsFull(PPWLobbyPlayers *players);
extern void PPWLobby_MakeChannelName(Str *out, u32 kind, Str *baseName);
extern enum PPWLobbyResult PPWLobby_EnterMainChannel(void);
extern BOOL PPWLobby_IsMainChannelReady(void);
}
typedef struct PPWLobbyUserProfile {
    u32 lobbyId;
    u32 trainerId;
    u8 unk_08[0x30];
    u8 gender;
    u8 language;
    u8 unk_3A[2];
    u16 country;
    u8 region;
    u8 unk_3F[3];
    u8 version;
} PPWLobbyUserProfile;
using std::memcmp;
using std::memcpy;
using std::memmove;
using std::memset;
using std::strlen;
inline void *operator new(std::size_t, void *p) {
    return p;
}
template <class T> inline const T &Min(const T &a, const T &b) {
    return a < b ? a : b;
}
extern "C" const char gLobbyStr_b_lib_u_user[], gLobbyStr_b_lib_u_system[], gLobbyStr_b_lib_c_time[],
    gLobbyStr_b_lib_c_lobby[];
extern "C" {
extern int printf(const char *, ...);
extern void abort(void);
extern void DWC_Free(int, void *, u32);
extern void LobbyTreeIterator_Advance(Iterator *);
}
class PPWString {
public:
    Str str;

    PPWString() {
        u32 i;
        u32 *p = str.words;
        for (i = 0; i < 3; i++) {
            p[i] = 0;
        }
    }

    PPWString(const char *text) {
        LobbyString_InitFromCStr(&str, text);
    }

    PPWString(const PPWString &other) {
        LobbyString_InitCopy(&str, &other.str);
    }

    PPWString &operator=(const PPWString &other) {
        LobbyString_Assign(&str, &other.str);
        return *this;
    }

    void Destroy() {
        LobbyString_Destroy(&str);
    }

    const char *CStr() const {
        return str.c_str();
    }
};
extern "C" char gLobbyStr_WebEncLobbySubmitQuestionnaireAsp[], gLobbyStr_WebEncLobbyGetQuestionnaireAsp[],
    gLobbyStr_StatsUploadKey[], gLobbyStr_WebEncLobbyGetScheduleAsp[], gLobbyStr_WebEncLobbyGetVIP_Asp[],
    gLobbyStr_WebEncLobbyCheckProfileAsp[];
extern "C" u8 data_020cd330;
extern "C" const char *gPPWLobbyGetScheduleUrl;
extern "C" const char *gPPWLobbyGetVipUrl;
extern "C" const char *gPPWLobbyGetQuestionnaireUrl;
extern "C" const char *gPPWLobbySubmitQuestionnaireUrl;
extern "C" signed char gLobbyStringTerminator;
extern "C" const char *gPPWLobbyCheckProfileUrl;
extern "C" const char *gPPWLobbyStatsUploadKey;
extern "C" signed char gLobbyStringInPlaceTerminator;
extern "C" u8 data_020cd334;
enum WebServer {
    WEB_SERVER_RELEASE,
    WEB_SERVER_DEVELOPMENT
};
struct WebRequestHeader {
    u32 userId;
    u16 one;
    u8 version;
    u8 language;
    u8 mac[6];
    u16 unk_0E;
    u32 unk_10;
};
inline const PPWLobbyUserProfile *GetUserProfile(PPWLobbyWork *work) {
    return (const PPWLobbyUserProfile *) LobbyByteVector_Data(&work->players.self.userProfile);
}
extern "C" void LobbyCharVector_AssignIterRange(LobbyCharVector *, ByteIterator, ByteIterator, RangeTag);
extern "C" void StatsUpload_Start(int server, const char *key);
extern "C" int StatsUpload_Upload(const char *page, int pid, const void *data, u32 size, int callback);
extern "C" int StatsUpload_UploadWithLastHash(const char *page, int pid, const void *data, u32 size, int callback);
extern "C" void StatsUpload_Stop(void);
struct ByteVector : LobbyCharVector {
    ByteVector() {
        data     = 0;
        size     = 0;
        capacity = 0;
    }

    void Assign(ByteIterator first, ByteIterator last) {
        Assign(first, last, AssignTag(), IteratorTag());
    }

    void Assign(ByteIterator first, ByteIterator last, const AssignTag &, const IteratorTag &) {
        LobbyCharVector_AssignIterRange(this, first, last, RangeTag());
    }

    void Destroy() {
        LobbyCharVector_Destroy(this);
    }
};
struct WebRequest;
struct WebRequestVtable {
    void (*unused)(WebRequest *request);
    void (*destroy)(WebRequest *request);
};
extern "C" const WebRequestVtable gPPWLobbyWebRequestVtable;
struct WebRequest {
    const WebRequestVtable *vtable;
    int retries;
    int server;
    PPWString key;
    PPWString page;
    int pid;
    ByteVector body;
    PPWLobbyWebCallback callback;
    void *param;
    BOOL useLastHash;

    WebRequest(int server, const char *key, const char *page, int pid, const u8 *first, const u8 *last,
               PPWLobbyWebCallback callback, BOOL useLastHash) :
        vtable(&gPPWLobbyWebRequestVtable),
        retries(3),
        server(server),
        key(key),
        page(page),
        pid(pid),
        body(),
        callback(callback),
        param(0),
        useLastHash(useLastHash) {
        body.Assign(ByteIterator(first), ByteIterator(last));
    }
};
extern "C" WebRequest *gPPWLobbyCurrentRequest;
extern "C" void LobbyCharVector_Allocate(LobbyCharVector *vector, u32 size, ByteAllocator);
struct SystemProfileHead {
    int channel;
};
struct SystemProfile : SystemProfileHead {
    u64 time;
    u32 unk_0C;

    SystemProfile() {}

    SystemProfile(const SystemProfile &other) :
        SystemProfileHead(other) {
        *this = other;
    }

    bool operator==(const SystemProfile &other) const {
        return memcmp(this, &other, sizeof(SystemProfile)) == 0;
    }
};
struct SystemProfileEntry {
    SystemProfile profile;
    BOOL changed;

    SystemProfileEntry(const SystemProfile &newProfile) :
        profile(newProfile),
        changed(1) {}

    void Assign(const SystemProfile &newProfile) {
        profile = newProfile;
        changed = 1;
    }
};
struct PlayerView {
    const void *vtable;
    SystemProfileEntry systemProfile;
    LobbyCharVector userProfile;
    BOOL userProfileChanged;
    int state;
    int id;
    BOOL systemProfileReceived;
    BOOL userProfileReceived;
    BOOL entered;
};
struct PlayerRecordData {
    u64 time;
    int channel;
};
struct PlayerRecord {
    PlayerRecordData d;

    PlayerRecord(const SystemProfile &profile) {
        d.channel = profile.channel;
        d.time    = profile.time;
    }

    PlayerRecord() {}

    PlayerRecord(const PlayerRecord &other) :
        d(other.d) {}
};
inline void SendWebRequest(WebRequest *request) {
    gPPWLobbyCurrentRequest = request;
    StatsUpload_Start(request->server, request->key.CStr());
    int ret;
    if (request->useLastHash) {
        u32 size = request->body.size;
        ret =
            StatsUpload_UploadWithLastHash(request->page.CStr(), request->pid, LobbyByteVector_Data(&request->body), size, 0);
    } else {
        u32 size = request->body.size;
        ret      = StatsUpload_Upload(request->page.CStr(), request->pid, LobbyByteVector_Data(&request->body), size, 0);
    }
    BOOL ok;
    if (ret == 0) {
        ok = 1;
    } else {
        StatsUpload_Stop();
        ok = 0;
    }
    if (ok) {
        return;
    }
    if (gPPWLobbyCurrentRequest != 0) {
        WebRequest *current = gPPWLobbyCurrentRequest;
        if (current != 0) {
            current->vtable->destroy(current);
        }
        gPPWLobbyCurrentRequest = 0;
    }
}
namespace SubmitQuestionnaire {
    extern "C" void OS_GetMacAddress(u8 *);
    struct Packet {
        WebRequestHeader header;
        u32 out0, out1;
        int mode;
        u32 trainerId;
        u32 gender;
        u16 country;
        u16 region;
    };
    struct Out {
        u32 a, b;
        u8 rest[0x2d0];
    };
    extern "C" enum PPWLobbyResult PPW_LobbySubmitQuestionnaire(int mode);
    extern "C" enum PPWLobbyResult PPW_LobbySubmitQuestionnaire(int mode);
} // namespace SubmitQuestionnaire
extern "C" {
enum PPWLobbyError PPW_LobbyGetLastError(void);
int PPW_LobbyToErrorCode(int error);
enum PPWLobbyError PPW_LobbyInitResultToLastError(int result);
}
extern "C" char gLobbyStr_Empty_15[];
extern "C" BOOL PPWLobby_EncodeMessage(enum PPWLobbyMessageFormat, enum PPWLobbyMessageKind, int, const void *, u32, Str *);
inline bool IsEmptyChannelName(const Str &name) {
    return LobbyString_CompareCStr(&name, gLobbyStr_Empty_15) == 0;
}
inline void SetError(PPWLobbyResult result) {
    PPWLobbyWork *work  = gPPWLobbyWork;
    PPWLobbyError error = PPWLobbyErrorMap().Map(result);
    if (error != PPW_LOBBY_ERROR_NONE) {
        work->error = error;
        work->state = PPW_LOBBY_STATE_ERROR;
    }
}
extern "C" enum PPWLobbyResult PPWLobby_SendMessage(int id, int channel, enum PPWLobbyMessageFormat type,
                                                    enum PPWLobbyMessageKind mode, int arg, const void *data, u32 size);
extern "C" {
extern char gLobbyStr_Empty_15[];
extern int DWC_Base64Encode(const void *, u32, char *, u32);
enum PPWLobbyResult PPWLobby_SetChannelData(int userId, enum PPWLobbyChannelKind kind, const char *key, const void *data,
                                            u32 size);
}
namespace StartCheckProfile {
    extern "C" void OS_GetMacAddress(u8 *);
    typedef u64 W8;
    struct B48 {
        u32 w[12];
    };
    struct UserProfileRecord {
        u32 lobbyId, trainerId;
        u16 h08[8];
        u32 h18, h1C;
        u16 h20[6];
        u8 b2C[6];
        u8 b32[6];
        u8 gender, language;
        u16 h3A, country;
        u8 region, b3F, b40, b41, version, b43;
        W8 b44;
        u8 b4C[12];
        B48 b58;

        struct {
            u16 h88, h8A;
        } t1;

        struct {
            u32 h8C, h90;
        } t2;
    };
    struct CheckProfileBody {
        WebRequestHeader header;
        UserProfileRecord profile;
    };
    extern "C" void PPWLobby_StartCheckProfile(void);
    extern "C" void PPWLobby_StartCheckProfile(void);
} // namespace StartCheckProfile
extern "C" {
extern char *gPPWLobbyChannelNamePrefixes[];
extern char gLobbyStr_Bang[];
void PPWLobby_MakeChannelName(Str *out, u32 kind, Str *baseName);
}
using namespace LobbyStringTypes;
extern "C" Str *LobbyString_Concat(Str *out, Str *left, Str *right);
using namespace LobbyStringTypes;
extern "C" Str *LobbyString_ConcatCStr(Str *out, Str *left, char *right);
extern "C" {
extern u32 current_time(void);
extern char gLobbyFmt_C_IntUnderscoreUint[];
void PPWLobby_GenerateChannelBaseName(Str *out);
}
using namespace LobbyCharVectorTypes;
namespace StringFormat {
    struct Vector {
        LobbyCharVector repr;

        Vector() {
            repr.data     = 0;
            repr.size     = 0;
            repr.capacity = 0;
        }

        ~Vector() {
            LobbyCharVector_Destroy(&repr);
        }

        void shrink(u32 count, ResizeDispatch) {
            repr.size -= count;
        }

        void resize(u32 count) {
            if (count > repr.size) {
                LobbyCharVector_AppendZeros(&repr, count - repr.size, ResizeDispatch());
            } else if (count < repr.size) {
                shrink(repr.size - count, ResizeDispatch());
            }
        }

        char *text() {
            return LobbyCharVector_Data(&repr);
        }
    };
    typedef char StringSize[sizeof(Str) == 12 ? 1 : -1];
    typedef char VectorSize[sizeof(Vector) == 12 ? 1 : -1];
    typedef char DispatchSize[sizeof(ResizeDispatch) == 1 ? 1 : -1];
} // namespace StringFormat
using namespace StringFormat;
extern "C" void LobbyString_Format(Str *output, const char *format, ...);
namespace EnterMainChannel {
    struct Callbacks {
        void (*a)();
        void (*b)();
        void (*c)();
        void (*d)();
        void (*e)();
        u32 f;

        Callbacks(void (*a_)(), void (*b_)(), void (*c_)(), void (*d_)(), void (*e_)()) :
            a(a_),
            b(b_),
            c(c_),
            d(d_),
            e(e_),
            f(0) {}
    };
    extern "C" void PPWLobby_OnPlayerJoined(), PPWLobby_OnPlayerLeft(), PPWLobby_OnMessage(), PPWLobby_OnChannelDataChanged(),
        PPWLobby_OnEnterMainChannel();
    extern "C" PPWString PPWLobby_GetChannelBaseName(PPWLobbyWork *, int);
    extern "C" PPWString PPWLobby_MakeChannelName(int, const PPWString &);
    extern "C" enum PPWLobbyResult LobbyChat_EnterChannelAsync(const char *, int, int, Callbacks *, void (*)(), int);
    extern "C" enum PPWLobbyResult PPWLobby_EnterMainChannel(void);
    inline PPWString MakeMainChannelName(PPWString t) {
        PPWString n = PPWLobby_MakeChannelName(0, t);
        t.Destroy();
        return n;
    }
    struct Channel {
        PPWLobbyChannelKind kind;
        u32 nm[3];
        BOOL usersEnumerated;
        BOOL modeReady;

        PPWString &name() {
            return *(PPWString *) nm;
        }

        void Destroy() {
            name().Destroy();
        }
    };
    inline void SetSelfChannel(const PPWString &n) {
        Channel c;
        PPWLobbyWork *w;
        Channel *p = &c;
        c.kind     = PPW_LOBBY_CHANNEL_KIND_MAIN;
        LobbyString_InitCopy(&c.name().str, &n.str);
        p->usersEnumerated  = 0;
        p->modeReady        = 0;
        w                   = gPPWLobbyWork;
        w->mainChannel.kind = c.kind;
        LobbyString_Assign(&w->mainChannel.name, &c.name().str);
        w->mainChannel.usersEnumerated = c.usersEnumerated;
        w->mainChannel.modeReady       = c.modeReady;
        c.Destroy();
    }
    extern "C" enum PPWLobbyResult PPWLobby_EnterMainChannel(void);
} // namespace EnterMainChannel
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
    extern "C" BOOL PPWLobby_DecodeMessageData(const char *, Vec *);
    extern "C" const u8 *LobbyByteVector_Data(Vec *);
    extern "C" void PPWLobby_HandleReceivedData(BOOL, BOOL, const char *, int, const char *, const char *, u32);
    extern "C" PPWLobbyPlayer *PPWLobbyPlayers_Find(PPWLobbyPlayers *players, int id);
    inline int Find(PPWLobbyWork *w, const PPWString &name) {
        const PPWString &n = name;
        int eq;
        {
            Str t;
            PPWLobbyChannel_GetName(&t, &w->mainChannel);
            eq = LobbyString_Equals(t, n.str);
            LobbyString_Destroy(&t);
        }
        if (eq) {
            return w->mainChannel.kind;
        }
        {
            Str t;
            PPWLobbyChannel_GetName(&t, &w->subChannel);
            eq = LobbyString_Equals(t, n.str);
            LobbyString_Destroy(&t);
        }
        if (eq) {
            return w->subChannel.kind;
        }
        return PPW_LOBBY_CHANNEL_KIND_INVALID;
    }
    inline int IsActive(PPWLobbyPlayer *s) {
        return s != 0 && s->entered;
    }
    extern "C" void PPWLobby_HandleReceivedData(BOOL success, BOOL broadcast, const char *channel, int userId, const char *key,
                                                const char *value, u32 param);
} // namespace HandleReceivedData
namespace DecodeMessageData {
    class Decoder {
    public:
        int Decode(const char *src, u32 len, LobbyCharVector *dst) const;
    };
    extern "C" int DWC_Base64Decode(const char *, u32, char *, u32);
    extern "C" BOOL PPWLobby_DecodeMessageData(const char *, LobbyCharVector *);
    inline void Shrink(LobbyCharVector *v, u32 count, ResizeDispatch) {
        v->size -= count;
    }
    inline void Resize(LobbyCharVector *v, u32 count) {
        u32 size = v->size;
        if (count > size) {
            LobbyCharVector_AppendZeros(v, count - size, ResizeDispatch());
        } else if (count < size) {
            Shrink(v, size - count, ResizeDispatch());
        }
    }
    inline int Decoder::Decode(const char *src, u32 len, LobbyCharVector *dst) const {
        return DWC_Base64Decode(src, len, LobbyByteVector_Data(dst), dst->size);
    }
    extern "C" BOOL PPWLobby_DecodeMessageData(const char *text, LobbyCharVector *out);
} // namespace DecodeMessageData
extern "C" int LobbyString_Equals(const Str &a, const Str &b);
namespace HandleLibraryData {
    extern "C" int strcmp(const char *, const char *);
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
        return a.size == b.size && (a.size == 0 || memcmp(LobbyByteVector_Data(&a), LobbyByteVector_Data(&b), a.size) == 0);
    }
    struct Quad {
        u32 a;
        u64 b;
        u32 c;
    };
    struct Triple {
        s64 b;
        u32 a;
    };
    struct VecBox {
        Vec v;
        BOOL changed;

        void Init(const Vec &x, AllocatorTag al) {
            v.InitCopy(x, al);
            changed = 1;
        }

        void InitM(const Vec &x, AllocatorTag al) {
            v.InitCopy(x, al);
            Mark();
        }

        void Mark() {
            if (this) {
                changed = 1;
            }
        }

        void Update(const VecBox &o) {
            if (!(v == o.v)) {
                v.AssignVec(o.v);
                changed = 1;
            }
        }
    };
    inline bool operator==(const Quad &a, const Quad &b) {
        return memcmp(&a, &b, sizeof(Quad)) == 0;
    }
    struct QuadBox {
        Quad q;
        BOOL changed;

        void Init(const Quad &x) {
            q       = x;
            changed = 1;
        }

        void Update(const QuadBox &o) {
            if (!(q == o.q)) {
                q       = o.q;
                changed = 1;
            }
        }
    };
    struct Rec {
        u32 x0;
        QuadBox q;
        VecBox vec;
        u32 x28, x2c;
        BOOL qRecv;
        BOOL vecRecv;
        BOOL valid;
        void SetVec(const u8 *d, u32 n, AllocatorTag al);
        void SetQuad(const u8 *d);

        Triple GetTriple() {
            Triple t;
            t.a = q.q.a;
            t.b = q.q.b;
            return t;
        }
    };
    struct Val : PPWLobbyTime {
        Val(const u8 *d) {
            ((u32 *) &seconds)[0] = ((const u32 *) d)[0];
            ((u32 *) &seconds)[1] = ((const u32 *) d)[1];
        }

        Val(const Val &o) {
            seconds = o.seconds;
        }
    };
    extern "C" Rec *PPWLobbyPlayers_Find(PPWLobbyPlayers *players, int id);
    inline void Rec::SetVec(const u8 *d, u32 n, AllocatorTag al) {
        Vec v;
        VecBox box;
        v.Init();
        v.Assign(ByteIterator(d), ByteIterator(d + n));
        VecBox *pb = &box;
        pb->InitM(v, al);
        VecBox *pc = &box;
        vec.Update(*pc);
        LobbyCharVector_Destroy(&box.v);
        vecRecv = 1;
        LobbyCharVector_Destroy(&v);
    }
    inline void Rec::SetQuad(const u8 *d) {
        QuadBox qbox;
        QuadBox *pq = &qbox;
        pq->Init(*(const Quad *) d);
        q.Update(*pq);
        qRecv = 1;
    }
    static inline void SetChannelTime(PPWLobbyWork *work, Val time) {
        work->schedule.hasTime = 1;
        work->schedule.time    = time;
    }
    static inline void OnPairFn(const u8 *d) {
        SetChannelTime(gPPWLobbyWork, Val(d));
    }
    extern "C" BOOL PPWLobby_HandleLibraryData(BOOL, BOOL, int, int, const char *, const u8 *, u32, u32);
    extern "C" BOOL PPWLobby_HandleLibraryData(BOOL success, BOOL broadcast, int kind, int userId, const char *key,
                                               const u8 *data, u32 len, u32 param);
} // namespace HandleLibraryData
namespace HandleSystemMessage {
    extern "C" {
    typedef struct {
        u32 pad[2];
        int format;
        int kind;
        int id;
    } Obj;
    extern PPWLobbyPlayer *PPWLobbyPlayers_Find(PPWLobbyPlayers *players, int id);
    static inline BOOL RecordValid(PPWLobbyPlayer *r) {
        return r && r->entered;
    }
    extern int PPWLobby_HandleSystemMessage(Obj *, int, int, void *, int);
    int PPWLobby_HandleSystemMessage(Obj *obj, int id, int flag, void *payload, int message);
    }
} // namespace HandleSystemMessage
extern "C" {
static inline int enough(s32 n) {
    int result;
    if (n >= PPW_LOBBY_SCHEDULE_STATE_LOADED) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}
BOOL PPWLobby_IsMainChannelReady(void);
}
extern "C" {
static inline BOOL flush(PPWLobbyWork *work) {
    u32 userId;
    void *buf;
    if (!work->players.self.userProfileChanged) {
        return 1;
    }
    work->players.self.userProfileChanged = 0;
    userId                                = gPPWLobbyWork->userId;
    buf                                   = LobbyByteVector_Data(&work->players.self.userProfile);
    PPWLobby_SetChannelData(userId, PPW_LOBBY_CHANNEL_KIND_MAIN, gLobbyStr_b_lib_u_user, buf,
                            work->players.self.userProfile.size);
    return 1;
}
BOOL PPWLobby_TimerUploadUserProfile(void);
}
namespace ChannelTimers {
    extern "C" {
    extern void LobbyChat_GetChannelModeAsync(const char *, void (*)(void), s32);
    extern void PPWLobby_OnGetChannelMode(void);
    extern BOOL PPWLobby_TimerUploadSystemProfile(void);
    extern BOOL PPWLobby_TimerSendRecruitInfo(void);
    extern BOOL PPWLobby_TimerPollChannelMode(void);
    extern BOOL PPWLobby_TimerRequestChannelTime(void);
    BOOL PPWLobby_TimerUploadSystemProfile(void);
    BOOL PPWLobby_TimerSendRecruitInfo(void);
    BOOL PPWLobby_TimerPollChannelMode(void);
    BOOL PPWLobby_TimerRequestChannelTime(void);
    }
} // namespace ChannelTimers
extern "C" {
static inline BOOL limit(int value) {
    return value >= PPW_LOBBY_SCHEDULE_STATE_LOADED;
}
BOOL PPWLobby_TimerRequestLobbyData(void);
}
extern "C" {
enum PPWLobbyWebResult PPWLobby_GetWebResultError(u32 type);
enum PPWLobbyWebResult PPWLobby_ParseWebResponse(BOOL valid, u8 *data, u32 size, void **output, u32 *length);
}
namespace OnCheckProfile {
    extern "C" void OS_GetMacAddress(u8 *);
    extern "C" void PPWLobby_OnCheckProfile(BOOL, u8 *, u32, void *);
    extern "C" void PPWLobby_OnCheckProfile(BOOL success, u8 *response, u32 responseSize, void *param);
} // namespace OnCheckProfile
namespace OnGetSchedule {
    extern "C" void OS_GetMacAddress(u8 *);
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
    struct VipRequestBody {
        WebRequestHeader header;
        u32 trainerId;
    };
    struct Obj;
    struct ObjVtable {
        void (*unused)(Obj *request);
        void (*destroy)(Obj *request);
    };
    extern "C" const ObjVtable gPPWLobbyWebRequestVtable;
    struct Obj {
        const ObjVtable *vtable;
        int retries;
        int server;
        PPWString key;
        PPWString page;
        u32 pid;
        Vec body;
        PPWLobbyWebCallback callback;
        void *param;
        BOOL useLastHash;

        Obj(int server, const char *key, const char *page, u32 pid, const VipRequestBody &info) :
            vtable(&gPPWLobbyWebRequestVtable),
            retries(3),
            server(server),
            key(key),
            page(page),
            pid(pid),
            body(),
            callback(PPWLobby_OnGetVip),
            param(0),
            useLastHash(1) {
            body.Assign(ByteIterator((const u8 *) &info), ByteIterator((const u8 *) &info + sizeof(VipRequestBody)));
        }
    };
    extern "C" Obj *gPPWLobbyCurrentRequest;
    extern "C" void PPWLobby_OnGetSchedule(BOOL, u8 *, u32, void *);
    extern "C" void PPWLobby_OnGetSchedule(BOOL success, u8 *response, u32 responseSize, void *param);
} // namespace OnGetSchedule
namespace OnGetVip {
    extern "C" void OS_GetMacAddress(u8 *);
    extern "C" void PPWLobby_OnGetVip(BOOL, u8 *, u32, void *);
    extern "C" void PPWLobby_OnGetVip(BOOL success, u8 *response, u32 responseSize, void *param);
} // namespace OnGetVip
extern "C" {
void PPWLobby_OnGetQuestionnaire(BOOL success, u8 *response, u32 responseSize, void *param);
}
extern "C" {
void PPWLobby_OnSubmitQuestionnaire(BOOL status, u8 *data, u32 size, void *param);
}
namespace OnEnterMainChannel {
    using std::memcmp;
    extern "C" void DWC_GetDateTime(RTCDate *date, RTCTime *time);
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
    extern "C" void LobbyString_Assign(Str *dst, const Str *src);
    static inline s64 GetNow(void) {
        RTCDate date;
        RTCTime time;
        DWC_GetDateTime(&date, &time);
        return RTC_ConvertDateTimeToSecond(&date, &time);
    }
    struct Pair {
        s64 v;

        Pair() {}

        Pair(s64 x) :
            v(x) {}
    };
    struct Stamp {
        u32 code;
        Pair pair;
        u32 extra;

        Stamp(u32 c) :
            code(c),
            pair(0),
            extra(0) {
            Pair *d = &pair;
            *d      = Pair(GetNow());
        }

        Stamp(const Stamp &o) :
            code(o.code) {
            Pair *d = &pair;
            *d      = o.pair;
            extra   = o.extra;
        }

        Stamp &operator=(const Stamp &o) {
            code  = o.code;
            pair  = o.pair;
            extra = o.extra;
            return *this;
        }

        bool operator==(const Stamp &o) const {
            return memcmp(this, &o, sizeof(Stamp)) == 0;
        }
    };
    struct Tracked {
        Stamp stamp;
        int active;

        Tracked(u32 c, int a) :
            stamp(Stamp(c)),
            active(a) {}

        void Set(const Tracked &t) {
            const Stamp *s = &t.stamp;
            if (!(stamp == *s)) {
                stamp  = *s;
                active = 1;
            }
        }
    };
    struct Task {
        s64 time;
        s64 period;
        void *arg;
        BOOL (*func)(void);

        Task() {}

        Task(s64 t, u32 p, BOOL (*f)(void)) {
            time   = t;
            period = p;
            arg    = 0;
            func   = f;
            time -= period;
        }
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
    struct InsertResult {
        void *node;
        bool inserted;
    };
    struct Map;
    extern "C" void func_02019b44(InsertResult *out, Map *m, const KV<u32, Task> *v);
    struct Map {
        u32 words[4];

        InsertResult insert(const KV<u32, Task> &v) {
            InsertResult r;
            func_02019b44(&r, this, &v);
            return r;
        }
    };
    extern "C" KV<int, Task> LobbyTimerMap_MakeEntry(int k, const Task &t);
    struct Arguments {
        s64 time;
        u32 code;
    };
    struct Sub {
        void *vt;
        u32 tree[4];
        Tracked tracked;
        LobbyCharVector vec;
        u8 pad34[0x3c - 0x34];
        u32 key;
        int flag;

        void SetFlag(int f) {
            flag = 0;
            if (f) {
                flag = 1;
            }
        }
    };
    struct Callbacks {
        void *cb8;
        void (*notify)(u32 key, Arguments *args, void *data, u32 size);
    };
    struct Peer {
        int kind;
        Str name;
        int a;
        int b;

        void Reset() {
            Str empty;
            kind = PPW_LOBBY_CHANNEL_KIND_INVALID;
            LobbyString_Assign(&name, &empty);
            a = 0;
            b = 0;
            LobbyString_Destroy(&empty);
        }
    };
    typedef struct Lobby {
        int state;
        int err;
        Callbacks cbs;
        u8 pad10[0x70 - 0x10];
        int retry;
        u8 pad74[0xb8 - 0x74];
        Peer peer;
        u8 padd0[0xe8 - 0xd0];
        Sub sub;
        u8 pad12c[0x134 - 0x12c];
        Map timers;
    } Lobby;
    extern "C" Lobby *gPPWLobbyWork;
    extern "C" void LobbyChat_EnumUsersAsync(void *handle, void (*cb)(void), u32 code);
    extern "C" void PPWLobby_OnEnumUsers(void);
    extern "C" void PPWLobby_OnEnterMainChannel(int success, void *unused, void *handle, u32 code);
    static inline void Lobby_ResetStamp(void) {
        gPPWLobbyWork->retry = 0;
        Tracked t(5, 1);
        Sub *sub = &gPPWLobbyWork->sub;
        sub->tracked.Set(t);
        sub->SetFlag(1);
    }
    static inline void Lobby_AddTimer(int kind, u32 delay, BOOL (*cb)(void)) {
        Map *m = &gPPWLobbyWork->timers;
        Task task(GetNow(), delay, cb);
        KV<int, Task> d = LobbyTimerMap_MakeEntry(kind, task);
        m->insert(d);
    }
    static inline Arguments Lobby_GetArgs(void) {
        const Stamp &s = gPPWLobbyWork->sub.tracked.stamp;
        Arguments a;
        a.code = s.code;
        a.time = s.pair.v;
        return a;
    }
    static inline void Lobby_Notify(Arguments *args) {
        Callbacks *cbs = &gPPWLobbyWork->cbs;
        Sub *sub       = &gPPWLobbyWork->sub;
        u32 key        = sub->key;
        cbs->notify(key, args, LobbyByteVector_Data(&sub->vec), sub->vec.size);
    }
    static inline BOOL Lobby_Retry(Lobby *w) {
        if (w->retry >= 3) {
            return 0;
        }
        w->retry++;
        return 1;
    }
    static inline void Lobby_SetError(PPWLobbyError code) {
        Lobby *w = gPPWLobbyWork;
        if (code != PPW_LOBBY_ERROR_NONE) {
            w->err   = code;
            w->state = PPW_LOBBY_STATE_ERROR;
        }
    }
    static inline void Lobby_OnFail(void) {
        gPPWLobbyWork->peer.Reset();
        if (Lobby_Retry(gPPWLobbyWork)) {
            gPPWLobbyWork->state = PPW_LOBBY_STATE_ENUM_CHANNELS;
        } else {
            Lobby_SetError(PPW_LOBBY_ERROR_SESSION);
        }
    }
    extern "C" void PPWLobby_OnEnterMainChannel(int success, void *unused, void *handle, u32 code);
} // namespace OnEnterMainChannel
namespace OnEnterSubChannel {
    struct Peer {
        int kind;
        PPWString name;
        int a;
        int b;

        void Reset() {
            PPWString empty;
            kind = PPW_LOBBY_CHANNEL_KIND_INVALID;
            name = empty;
            a    = 0;
            b    = 0;
            empty.Destroy();
        }
    };
    struct Work {
        int state;
        int sub;
        void (*callback)(int, int);
        u8 padc[0xd0 - 0xc];
        Peer peer;
        u8 pade8[0xfc - 0xe8];
        SystemProfileEntry systemProfile;
        u8 pad110[0x128 - 0x110];
        BOOL systemProfileReceived;
    };
    extern "C" Work *gPPWLobbyWork;
    extern "C" void PPWLobby_OnEnterSubChannel(BOOL success, int error, const char *channel, int kind);
    extern "C" void PPWLobby_OnEnterSubChannel(BOOL success, int error, const char *channel, int kind);
} // namespace OnEnterSubChannel
namespace OnPlayerJoined {
    extern "C" PlayerView *PPWLobbyPlayers_Find(PPWLobbyPlayers *players, int id);
    extern "C" void PPWLobby_OnPlayerJoined(char *, int);
    extern "C" void PPWLobbyPlayers_Add(PPWLobbyPlayers *players, int id);
    inline int Match(PPWLobbyChannel *c, const Str &name) {
        Str t;
        int r;
        PPWLobbyChannel_GetName(&t, c);
        r = LobbyString_Equals(t, name);
        LobbyString_Destroy(&t);
        return r;
    }
    inline int Find(PPWLobbyWork *w, const Str &name) {
        const Str &n = name;
        if (Match(&w->mainChannel, n)) {
            return w->mainChannel.kind;
        }
        if (Match(&w->subChannel, n)) {
            return w->subChannel.kind;
        }
        return PPW_LOBBY_CHANNEL_KIND_INVALID;
    }
    inline void UpdatePlayerChannel(PlayerView *s, SystemProfile &info, PlayerRecord &arg, int kind) {
        s->systemProfile.changed = 0;
        info                     = s->systemProfile.profile;
        info.channel             = kind;
        SystemProfileEntry e(info);
        const SystemProfile &ni = e.profile;
        if (!(s->systemProfile.profile == ni)) {
            s->systemProfile.Assign(ni);
        }
        s->systemProfileReceived = 1;
        s->systemProfile.changed = 0;
    }
    inline void MakeSummary(PlayerView *s, PlayerRecord &arg) {
        PlayerRecord sum(s->systemProfile.profile);
        arg = sum;
    }
    extern "C" void PPWLobby_OnPlayerJoined(char *channel, int id);
} // namespace OnPlayerJoined
namespace OnPlayerLeft {
    extern "C" PlayerView *PPWLobbyPlayers_Find(PPWLobbyPlayers *players, int id);
    extern "C" void PPWLobbyPlayers_Remove(PPWLobbyPlayers *players, int id);
    extern "C" void PPWLobby_OnPlayerLeft(char *, int);
    inline int Match(PPWLobbyChannel *c, const Str &name) {
        Str t;
        int r;
        PPWLobbyChannel_GetName(&t, c);
        r = LobbyString_Equals(t, name);
        LobbyString_Destroy(&t);
        return r;
    }
    inline int Find(PPWLobbyWork *w, const Str &name) {
        const Str &n = name;
        if (Match(&w->mainChannel, n)) {
            return w->mainChannel.kind;
        }
        if (Match(&w->subChannel, n)) {
            return w->subChannel.kind;
        }
        return PPW_LOBBY_CHANNEL_KIND_INVALID;
    }
    inline void UpdatePlayerChannel(PlayerView *s, SystemProfile &info, PlayerRecord &arg) {
        s->systemProfile.changed = 0;
        info                     = s->systemProfile.profile;
        info.channel             = PPW_LOBBY_CHANNEL_KIND_INVALID;
        SystemProfileEntry e(info);
        const SystemProfile &ni = e.profile;
        if (!(s->systemProfile.profile == ni)) {
            s->systemProfile.Assign(ni);
        }
        s->systemProfileReceived = 1;
        s->systemProfile.changed = 0;
    }
    inline void MakeSummary(PlayerView *s, PlayerRecord &arg) {
        PlayerRecord sum(s->systemProfile.profile);
        arg = sum;
    }
    extern "C" void PPWLobby_OnPlayerLeft(char *channel, int id);
} // namespace OnPlayerLeft
extern "C" {
extern void PPWLobby_OnMessage(int, int, int, int);
void PPWLobby_OnPlayerMessage(int a, int b, int c);
}
namespace OnMessage {
    extern "C" {
    typedef struct {
        int a, b, type, kind, arg, spare;
        LobbyCharVector text;
    } Message;
    extern void PPWLobby_HandleSystemMessage(Message *, int, int, void *, u32);
    extern BOOL PPWLobby_ParseMessage(Str *, Message *);
    extern PPWLobbyPlayer *PPWLobbyPlayers_Find(PPWLobbyPlayers *players, int id);
    extern void PPWLobby_OnMessage(const char *, int, const char *);
    static inline void zeroString(LobbyCharVector *s) {
        u32 *p = (u32 *) s;
        *p++   = 0;
        *p++   = 0;
        *p     = 0;
    }
    static inline BOOL validEntry(PPWLobbyPlayer *p) {
        if (p && p->entered) {
            return 1;
        }
        return 0;
    }
    void PPWLobby_OnMessage(const char *key, int index, const char *name);
    }
} // namespace OnMessage
extern "C" {
extern void PPWLobby_OnChannelDataChanged(const char *channel, int userId, const char *key, const char *value);
void PPWLobby_OnExcessFlood(int a);
void PPWLobby_OnChannelDataChanged(const char *channel, int userId, const char *key, const char *value);
void PPWLobby_OnGetChannelKeys(BOOL success, const char *channel, int userId, const char *key, const char *value, u32 param);
}
extern "C" {
extern char gLobbyStr_Bang[];
extern void LobbyString_Split(LobbyStringVector *, Str *, Str *, int);
void PPWLobby_OnEnumChannels(int valid, int count, char **names, int unused, int *types);
}
namespace StringSplit {
    struct Str;
    extern "C" Str *LobbyString_InitCopy(Str *, const Str *);
    extern "C" void LobbyString_Destroy(Str *);
    extern "C" void LobbyString_Assign(Str *, const Str *);
    extern "C" int LobbyString_Find(const Str *, const Str *, int);
    extern "C" void LobbyString_Substr(Str *, const Str *, int, int);
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
    extern "C" void LobbyStringVector_PushBackSlow(Vec *, const Str &, Alloc);
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
                LobbyStringVector_PushBackSlow(this, x, Alloc());
            }
        }
    };
    extern "C" Vec LobbyString_Split(const Str &s, const Str &delim, int max);
    extern "C" Vec LobbyString_Split(const Str &s, const Str &delim, int max);
} // namespace StringSplit
extern "C" {
void LobbyString_Substr(Str *out, Str *str, u32 pos, u32 n);
}
extern "C" void PPWLobbyPlayers_Add(PPWLobbyPlayers *players, int id);
extern "C" void PPWLobby_OnEnumUsers(int, char *, int, int *);
inline int Find(PPWLobbyWork *w, const PPWString &name) {
    const PPWString &n = name;
    int eq;
    {
        Str t;
        PPWLobbyChannel_GetName(&t, &w->mainChannel);
        eq = LobbyString_Equals(t, n.str);
        LobbyString_Destroy(&t);
    }
    if (eq) {
        return w->mainChannel.kind;
    }
    {
        Str t;
        PPWLobbyChannel_GetName(&t, &w->subChannel);
        eq = LobbyString_Equals(t, n.str);
        LobbyString_Destroy(&t);
    }
    if (eq) {
        return w->subChannel.kind;
    }
    return PPW_LOBBY_CHANNEL_KIND_INVALID;
}
inline bool IsSelf(int id) {
    return id == gPPWLobbyWork->userId;
}
extern "C" void PPWLobby_OnEnumUsers(int success, char *channel, int count, int *ids);
extern "C" {
extern void PPWLobby_OnGetChannelMode(BOOL success, const char *channel, const u32 *mode);
void PPWLobby_OnGetChannelMode(BOOL success, const char *channel, const u32 *mode);
}
namespace OnGetChannelTime {
    struct Stamp {
        s64 v;
    };
    struct DateTime {
        RTCDate date;
        RTCTime time;
    };
    extern "C" BOOL PPWLobby_DecodeMessageData(const char *, LobbyCharVector *);
    extern "C" void DWC_GetDateTime(RTCDate *, RTCTime *);
    extern "C" void PPWLobby_OnGetChannelTime(BOOL, const char *, int, const char *, const char *, u32);
    extern "C" void PPWLobby_OnGetChannelTime(BOOL result, const char *channel, int userId, const char *key, const char *value,
                                              u32 param);
} // namespace OnGetChannelTime
extern "C" {
extern BOOL PPWLobby_DecodeMessageData(const char *, LobbyCharVector *);
static inline int appendBlob(LobbyCharVector *blob) {
    PPWLobbyWork *w = gPPWLobbyWork;
    return PPWLobbySchedule_Load(&w->schedule, LobbyByteVector_Data(blob), blob->size);
}
void PPWLobby_OnGetLobbyData(BOOL success, const char *channel, int userId, const char *key, const char *value, u32 param);
}
extern "C" {
extern u8 gPPWLobbyPlayersVtable[];
void PPWLobby_OnTopicChanged(void);
void *PPWLobbyWebRequest_Destroy(PPWLobbyWebRequest *request);
void *PPWLobbyPlayers_Delete(PPWLobbyPlayers *players);
void *PPWLobbyPlayer_Delete(PPWLobbyPlayer *player);
}
LobbyEventDeque *LobbyEventDeque_Destroy(LobbyEventDeque *deque);
extern "C" {
void *PPWLobbyPlayerSet_Destroy(PPWLobbyPlayerSet *set);
}
extern "C" {
typedef struct Result {
    LobbyTimerMapNode *node;
    u8 flag;
    char pad[3];
} Result;
extern LobbyTimerMapNode *func_0201b400(LobbyTimerMap *, LobbyTimerMapNode *, u8, u8, u32 *);
extern void func_02019b44(Result *, LobbyTimerMap *, u32 *);
void func_02019b44(Result *r, LobbyTimerMap *map, u32 *v) {
    u8 second, first;
    LobbyTimerMapNode *node;
    LobbyTimerMapNode *parent = func_0201a404(map, v, &node, &second, &first);
    if (!node || node->id < *v) {
        r->node = func_0201b400(map, parent, second, first, v);
        r->flag = data_020cd330;
    } else {
        r->node = node;
        r->flag = data_020cd334;
    }
}
}
extern "C" {
extern void LobbyTimerMap_DestroyNodes(LobbyTimerMap *map, LobbyTimerMapNode *node);
extern LobbyTimerMapNode *LobbyTree_EraseRebalance(LobbyTimerMapNode *node, LobbyTimerMapNode *root);
extern void LobbyTimerMap_Erase(Iterator *result, LobbyTimerMap *map, Iterator position);
void LobbyTimerMap_Erase(Iterator *result, LobbyTimerMap *map, Iterator position);
void LobbyTimerMap_Clear(LobbyTimerMap *map);
}
namespace TimerMapInsertNode {
    extern "C" char gLobbyStr_TreeInsertLengthError[];
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
    struct Node {
        Node *left, *right, *parent;
        Value val;
    };
    struct Tree {
        u32 count;
        Node *root;
        u32 unk8;
        Node *leftmost;
    };
    class Holder {
    public:
        Node *a;
        Node *b;
        Node **alloc;
        Node *volatile ptr;

        Holder(Node *n, Node **al) :
            a(n),
            b(n),
            alloc(al),
            ptr(n) {}

        void Destroy() {
            Node *p = ptr;
            if (p) {
                DWC_Free(0, p, 0);
            }
        }

        void Release() {
            ptr = 0;
        }
    };
    inline Node *Allocate(Alloc) {
        return (Node *) LobbyMem_Alloc(sizeof(Node));
    }
    extern "C" void LobbyTree_InsertRebalance(Node *, Node *);
    extern "C" Node *func_0201b400(Tree *, Node *, int, int, Value *);
    extern "C" Node *func_0201b400(Tree *t, Node *parent, int left, int leftmost, Value *v);
} // namespace TimerMapInsertNode
extern "C" {
void LobbyTimerMap_DestroyNodes(LobbyTimerMap *map, LobbyTimerMapNode *node);
void *LobbyTimerMap_Destroy(LobbyTimerMap *map);
}
namespace TreeIterator {
    struct TreeNode {
        void *left;
        void *right;
        u32 parent;
    };
    static inline void *Left(void *node) {
        return static_cast<TreeNode *>(node)->left;
    }
    static inline void *Right(void *node) {
        return static_cast<TreeNode *>(node)->right;
    }
    static inline void *Parent(void *node) {
        return reinterpret_cast<void *>(static_cast<TreeNode *>(node)->parent & ~1UL);
    }
    extern "C" void LobbyTreeIterator_Advance(Iterator *it);
    extern "C" void LobbyTreeIterator_Advance(Iterator *it);
} // namespace TreeIterator
namespace TreeInsertRebalance {
    extern "C" {
    typedef struct Node {
        void *left, *right;
        u32 parent;
    } Node;
    static inline Node *Parent(Node *n) {
        return (Node *) (n->parent & ~1);
    }
    extern void LobbyTree_RotateLeft(Node *, void **), LobbyTree_RotateRight(Node *, void **);
    static inline int Red(Node *n) {
        return (n->parent & 1) ? 1 : 0;
    }
    static inline void Black(Node *n) {
        n->parent &= ~1;
    }
    static inline void Paint(Node *n) {
        n->parent |= 1;
    }
    extern void LobbyTree_InsertRebalance(Node *, void *);
    void LobbyTree_InsertRebalance(Node *n, void *volatile root);
    }
} // namespace TreeInsertRebalance
namespace TreeEraseRebalance {
    extern "C" {
    typedef struct Node {
        struct Node *left, *right;
        u32 tagged;
    } Node;
    extern void LobbyTree_RotateLeft(Node *, void **), LobbyTree_RotateRight(Node *, void **);
    extern Node *LobbyTree_EraseRebalance(Node *, void *);
    static inline Node *parent(Node *n) {
        return (Node *) (n->tagged & ~1);
    }
    static inline int red(Node *n) {
        if (*(volatile u32 *) &n->tagged & 1) {
            return 1;
        }
        return 0;
    }
    static inline void setParent(Node *n, Node *p) {
        n->tagged = (u32) p | (n->tagged & 1);
    }
    static inline void setRed(Node *n, int r) {
        u32 t = n->tagged;
        if (r) {
            t |= 1;
        } else {
            t &= ~1;
        }
        n->tagged = t;
    }
    static inline int redLoaded(Node *n, u32 *tag) {
        u32 t = n->tagged;
        *tag  = t;
        if (t & 1) {
            return 1;
        }
        return 0;
    }
    Node *LobbyTree_EraseRebalance(Node *node, void *root);
    }
} // namespace TreeEraseRebalance
extern "C" {
struct Vec {
    void *ptr;
    u32 size, cap;
};
struct TreeNode {
    void *left, *right;
    u32 parent;
    u32 key;
    u32 data[6];
};
struct Alloc {
    u8 tag;
};
extern void LobbyStringVector_RecommendSize(struct Vec *, u32, int),
    LobbyStringVector_AppendCopiesSlow(struct Vec *, u32, void *);
extern void LobbyTree_RotateLeft(struct TreeNode *a, void **root);
extern void LobbyTree_RotateRight(struct TreeNode *a, void **root);
extern void LobbyStringVector_PushBackSlow(struct Vec *a, void *b, struct Alloc unused);
void LobbyTree_RotateLeft(struct TreeNode *a, void **root);
void LobbyTree_RotateRight(struct TreeNode *a, void **root);
void LobbyStringVector_PushBackSlow(struct Vec *a, void *b, struct Alloc unused);
}
namespace StringVectorDestroy {
    extern "C" {
    extern void LobbyStringVector_EraseAtEnd(LobbyStringVector *, u32, ByteAllocator, u32);
    extern LobbyStringVector *LobbyStringVector_Destroy(LobbyStringVector *);
    LobbyStringVector *LobbyStringVector_Destroy(LobbyStringVector *vector);
    }
} // namespace StringVectorDestroy
extern "C" {
LobbyU32Vector *LobbyU32Vector_Destroy(LobbyU32Vector *vector);
PPWLobbyVipVector *LobbyVipVector_Destroy(PPWLobbyVipVector *vector);
LobbyEventVector *LobbyEventVector_Destroy(LobbyEventVector *vector);
}
inline void FillN(char *p, u32 n, char c, TrueTag) {
    memset(p, c, n);
}
extern "C" void LobbyCharVector_Grow(LobbyCharVector *vector, u32 n);
extern "C" {
void LobbyCharVector_Allocate(LobbyCharVector *vector, u32 size, ByteAllocator);
}
extern "C" {
extern void LobbyCharVector_Reallocate(LobbyCharVector *vector, ByteAllocator, u32 size);
void LobbyCharVector_Reallocate(LobbyCharVector *vector, ByteAllocator incoming, u32 size);
}
extern "C" {
extern void _ZNSt15__vector_commonILb1EE18throw_length_errorEv(void);
u32 LobbyCharVector_RecommendSize(LobbyCharVector *a, u32 n);
}
extern "C" void LobbyCharVector_AppendZeros(LobbyCharVector *vector, u32 count, ResizeDispatch);
using LobbyStringTypes::RangeDispatch;
struct CharacterAllocator {
    void release(char *storage) {
        if (storage) {
            DWC_Free(0, storage, 0);
        }
    }
};
extern "C" LobbyCharVector *LobbyCharVector_Destroy(LobbyCharVector *vector);
extern "C" Str *LobbyString_InitCopy(Str *output, const Str *input);
extern "C" Str *LobbyString_InitSubstring(Str *self, Str *str, u32 pos, u32 n);
extern "C" Str *LobbyString_InitFromCStr(Str *output, const char *text);
extern "C" Str *LobbyString_Destroy(Str *output);
extern "C" {
extern char gLobbyStr_BasicStringReserveLengthError[];
void LobbyString_Reserve(Str *w, u32 size);
}
extern "C" {
Str *LobbyString_Assign(Str *dst, const Str *src);
}
using namespace LobbyStringTypes;
extern "C" Str *LobbyString_Replace(Str *out, u32 pos, u32 remove, const Str *input);
extern "C" char gLobbyStr_BasicStringOutOfRange[];
extern "C" Str *LobbyString_ReplaceSubstring(Str *self, u32 pos, u32 n1, Str *str, u32 pos2, u32 n2);
inline StringSearchRange StringSearch::GetRange() const {
    if (raw.longForm.flag) {
        return StringSearchRange(raw.longForm.data, raw.longForm.size);
    }
    return StringSearchRange(raw.shortForm.data, raw.shortForm.size);
}
inline int StringSearch::Find(const StringSearch &other, u32 pos) const {
    StringSearchRange needle = other.GetRange();
    return (int) LobbyString_FindChars(this, needle.data, pos, needle.size);
}
extern "C" int LobbyString_Find(const StringSearch *a, const StringSearch *b, u32 pos);
extern "C" {
u32 LobbyString_FindChars(const StringSearch *s, const s8 *needle, u32 start, u32 count);
}
static inline int Compare(const Str *self, const Str &other) {
    const char *d;
    u32 n;
    if (!other.l.isLong) {
        d = other.s.buf;
        n = other.s.len;
    } else {
        d = other.l.ptr;
        n = other.l.size;
    }
    return LobbyString_CompareChars(self, 0, self->size(), d, n);
}
static inline int Compare(const Str *self, const char *text) {
    u32 n = strlen(text);
    return LobbyString_CompareChars(self, 0, self->size(), text, n);
}
extern "C" int LobbyString_Compare(const Str *a, const Str *b);
extern "C" int LobbyString_CompareCStr(const Str *a, const char *b);
extern "C" {
extern const char gLobbyStr_StringComparePosGtLen[];
static inline const u32 *MinPtr(const u32 *a, const u32 *b) {
    return *a < *b ? a : b;
}
int LobbyString_CompareChars(const Str *s, u32 pos, u32 length, const void *other, u32 otherLength);
}
namespace StringReplaceRange {
    extern "C" const char gLobbyStr_BasicStringOutOfRange[], gLobbyStr_BasicStringLengthError[];
    class Tag {};
    extern "C" Str *LobbyString_AssignRange(Str *, const char *, const char *, int);
    inline const u32 &Min(const u32 &a, const u32 &b) {
        return b < a ? b : a;
    }
    extern "C" Str *LobbyString_ReplaceRange(Str *s, u32 pos, u32 n1, const char *first, const char *last, Tag);
    extern "C" Str *LobbyString_ReplaceRange(Str *s, u32 pos, u32 n1, const char *first, const char *last, Tag);
} // namespace StringReplaceRange

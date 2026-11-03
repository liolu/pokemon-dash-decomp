/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* LobbyTimerMap_FindInsertPos from https://github.com/ctrl-cheeb-del/pokeheartgold src/lobby/lobby_timer_map_find_insert_pos.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef signed long long int s64;
typedef int BOOL;
typedef BOOL (*LobbyTimerCallback)(void *param);
typedef struct LobbyTimer {
    s64 lastTime;
    s64 interval;
    void *param;
    LobbyTimerCallback callback;
} LobbyTimer;
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
extern LobbyTimerMapNode *func_0207878c(LobbyTimerMap *map, const u32 *key, LobbyTimerMapNode **last, u8 *left, u8 *first);
LobbyTimerMapNode *func_0207878c(LobbyTimerMap *map, const u32 *key, LobbyTimerMapNode **last, u8 *left, u8 *first) {
    LobbyTimerMapNode *n;
    LobbyTimerMapNode *parent = (LobbyTimerMapNode *) &map->root;
    *last                     = ((void *) 0);
    n                         = map->root;
    *left                     = 1;
    *first                    = 1;
    while (n) {
        parent = n;
        if (*key < n->id) {
            n     = n->left;
            *left = 1;
        } else {
            *last  = n;
            n      = n->right;
            *left  = 0;
            *first = 0;
        }
    }
    return parent;
}

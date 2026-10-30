/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FS_LoadOverlay from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fs/overlay.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef void (*UnkOverlayCtor)(void);
typedef struct UnkOverlayInfo {
    u32 id;
    u8 *addr;
    u32 ramSize;
    u32 bssSize;
    UnkOverlayCtor *ctorStart;
    UnkOverlayCtor *ctorEnd;
    u32 fileId;
    u32 compressedSize : 24;
    u32 flags : 8;
    u32 target;
    u32 filePos;
    u32 fileLen;
} UnkOverlayInfo;
BOOL func_020a13c0(UnkOverlayInfo *info, u32 target, u32 id);
BOOL func_020a134c(UnkOverlayInfo *info);
void func_020a117c(UnkOverlayInfo *info);
BOOL func_020a0fe4(u32 target, u32 id) {
    UnkOverlayInfo info;

    if (!func_020a13c0(&info, target, id) || !func_020a134c(&info)) {
        return 0;
    }
    func_020a117c(&info);
    return 1;
}

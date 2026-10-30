/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Wireless_StepDataSharing from https://github.com/sturmds/advance-wars-dual-strike-decomp
 * src/game/main/link/wireless_step_data_sharing.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef int BOOL;
extern struct WMDataSharingInfo *data_020d4e54;
extern struct WMDataSet *data_020d4e68;
typedef struct WMDataSet {
    u16 aidBitmap;
    u16 receivedBitmap;
    u16 data[508 / 2];
} WMDataSet;
typedef struct WMDataSharingInfo {
    WMDataSet ds[4];
    u16 seqNum[4];
    u16 writeIndex;
    u16 sendIndex;
    u16 readIndex;
    u16 aidBitmap;
    u16 dataLength;
    u16 stationNumber;
    u16 dataSetLength;
    u16 port;
    u16 doubleMode;
    u16 currentSeqNum;
    u16 state;
    u16 reserved[1];
} WMDataSharingInfo;
extern int func_020a6a68(void *sharing, void *sendData, WMDataSet *receiveData);
BOOL func_02008808(void *sendData, u16 *out) {
    BOOL ok;

    if (func_020a6a68(data_020d4e54, sendData, data_020d4e68) != 0) {
        ok = 0;
    } else {
        *out = data_020d4e68->receivedBitmap;
        ok   = 1;
    }
    return ok;
}

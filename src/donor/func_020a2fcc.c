/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02011950 from projets/code-lyoko/src/donor/func_02011950.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
typedef void (*PMCallback)(u32 result, void *arg);
typedef struct {
    u16 flag;
    u16 padding;
    u16 *buffer;
} PMData16;
extern void func_020a2d24(u32 data);
extern u32 func_020a2fcc(u16 registerAddr, u16 *buffer, PMCallback callback, void *arg);
extern const u16(*ctrdgi_fl_maxtime);
typedef struct {
    BOOL lock;
    PMCallback callback;
    void *callbackArg;
    void *work;
} PMiWork;
inline u32 PMi_MakeData1(u32 bit, u32 seq, u32 command, u32 data) {
    return (bit) | ((seq) << 16) | ((command) << 8) | ((data) & 0xff);
}
extern BOOL func_020a3394(void);
extern PMiWork data_020da3fc;
extern PMData16 data_020da420[5];
extern BOOL func_020a3394(void);
u32 func_020a2fcc(u16 registerAddr, u16 *buffer, PMCallback callback, void *arg) {
    u32 pxi_send_data;

    if (!func_020a3394()) {
        return 1;
    }

    do {
        data_020da3fc.callback    = (callback);
        data_020da3fc.callbackArg = (arg);
    } while (0);

    data_020da420[registerAddr].flag   = 0;
    data_020da420[registerAddr].buffer = buffer;

    pxi_send_data = PMi_MakeData1(0x02000000 | 0x01000000, 0, 0x0065, registerAddr);
    func_020a2d24(pxi_send_data);

    return 0;
}
extern void func_020a2d24(u32 data);

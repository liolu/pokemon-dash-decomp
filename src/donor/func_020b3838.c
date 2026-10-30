/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* __read_console from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/Runtime/src/console_io.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long __file_handle;
extern int func_020b3838(__file_handle handle, unsigned char *buffer, int *count, void *ref);
// clang-format off
asm int func_020b37d4(void);
// clang-format on
int func_020b3838(__file_handle handle, unsigned char *buffer, int *count, void *ref) {
    unsigned long i, n;

    for (i = 0, n = *count; i < n; i++) {
        buffer[i] = func_020b37d4();
        if (buffer[i] == '\r' || buffer[i] == '\n') {
            *count = i + 1;
            break;
        }
    }

    return 0;
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* __write_console from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/Runtime/src/console_io.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long __file_handle;
extern int func_020b3800(__file_handle handle, unsigned char *buffer, int *count, void *ref);
// clang-format off
asm void func_020b37c0(register void* c);
// clang-format on
extern void func_020b37c0(void *c);
int func_020b3800(__file_handle handle, unsigned char *buffer, int *count, void *ref) {
    unsigned long i, n;

    for (i = 0, n = *count; i < n; i++) {
        func_020b37c0(&buffer[i]);
    }

    return 0;
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* wcstombs from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/mbstring.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long size_t;
typedef unsigned short wchar_t;
extern char *func_020ad918(char *dest, const char *src, size_t n);
int func_020ab400(char *s, wchar_t wchar);
int func_020ab36c(char *s, const wchar_t *pwcs, unsigned int n) {
    int chars_written = 0;
    int result;
    char temp[3];
    const unsigned short *source;

    if (s == 0 || pwcs == 0) {
        return 0;
    }

    source = pwcs;
    while (chars_written <= n) {
        if (!*source) {
            *(s + chars_written) = '\0';
            break;
        } else {
            result = func_020ab400(temp, *source++);
            if ((chars_written + result) <= n) {
                func_020ad918(s + chars_written, temp, result);
                chars_written += result;
            } else {
                break;
            }
        }
    }

    return chars_written;
}

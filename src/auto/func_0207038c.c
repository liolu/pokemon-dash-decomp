/* compiler: 1.2/sp2p3 */
void *func_0207038c(void *o, signed char *p, signed char **out) {
    for (;;) {
        switch (*p) {
            default:
                return 0;
            case 0x4e:
                o = *(void **) ((char *) o + 4);
                if (o == 0) {
                    return 0;
                }
                p = p + 1;
                continue;
            case 0x4d:
            case 0x50:
                p += 1;
            case 0:
                if (out != 0) {
                    *out = p;
                }
                return o;
        }
    }
}

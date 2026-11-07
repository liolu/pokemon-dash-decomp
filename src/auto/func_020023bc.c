/* compiler: 1.2/sp2p3 */
extern unsigned char func_02002420(unsigned int);
unsigned short func_020023bc(unsigned char *p) {
    unsigned short i = 0;
    if (p[0] != 0xff) {
        do {
            unsigned char c = p[i];
            i += 1;
            if (c == 0xfc) {
                i += func_02002420(p[i]);
            }
        } while (p[i] != 0xff);
    }
    return i;
}

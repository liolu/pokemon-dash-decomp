/* compiler: 1.2/sp2p3 */
void func_020816e4(int *d, int *s, int k) {
    d[0] = (int) (((long long) s[0] * k + 0x800) >> 12);
    d[1] = (int) (((long long) s[1] * k + 0x800) >> 12);
    d[2] = (int) (((long long) s[2] * k + 0x800) >> 12);
}

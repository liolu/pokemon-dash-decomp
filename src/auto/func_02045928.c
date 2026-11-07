/* compiler: 1.2/sp2p3 */
int func_02045928(int x) {
    long long t = x >> 6;
    return (int) ((t * t + 0x800) >> 12) >> 12;
}

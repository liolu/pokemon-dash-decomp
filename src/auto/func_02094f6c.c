/* compiler: 1.2/b56 */
extern volatile unsigned short data_020d7544;
extern short data_020d7534;
extern unsigned short data_020d7538;
extern unsigned int data_023c0000[];
void func_02094f6c(void) {
    unsigned int *p;
    int off = 0x3ff8;
    if (data_020d7544 != 0) {
        data_020d7544 -= 1;
        if (data_020d7544 == 0) {
            data_020d7534 = 1;
        }
    }
    p  = (unsigned int *) ((char *) data_023c0000 + off);
    *p = *p | (8 << data_020d7538);
}

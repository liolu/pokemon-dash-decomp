/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205b274 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0205/func_0205b274.c (license: MIT), reused
 * by tools/donor_match.py */
extern unsigned int func_0209ec3c(void);
extern int data_020d876c;
extern int data_020d877c;
extern void **data_020d878c[];
extern void **data_020d8778;
extern void **data_020d8768;
extern int data_020d8784;
void **func_0209e910(int flag) {
    void **head;
    void **node;
    int idx;

    if (flag == 0) {
        if (func_0209ec3c() == (unsigned int) data_020d876c) {
            return 0;
        }
    } else {
        while (func_0209ec3c() == (unsigned int) data_020d876c) {
        }
    }

    idx           = data_020d877c;
    head          = *(void ***) ((int) data_020d878c + idx * 4);
    idx           = idx + 1;
    data_020d877c = idx;
    if (idx > 8) {
        data_020d877c = 0;
    }

    node = head;
    while (*node != 0) {
        node = (void **) *node;
    }

    if (data_020d8778 != 0) {
        *data_020d8778 = head;
    } else {
        data_020d8768 = head;
    }
    data_020d8778 = node;
    data_020d8784 = data_020d8784 - 1;
    data_020d876c = data_020d876c + 1;
    return head;
}

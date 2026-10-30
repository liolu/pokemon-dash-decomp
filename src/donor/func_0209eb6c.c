/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205b504 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0205/func_0205b504.c (license: MIT), reused
 * by tools/donor_match.py */
typedef struct UnkStruct_020a7f60 {
    char pad0[8];
    unsigned char unk8;
    char pad9[3];
} UnkStruct_020a7f60;
extern UnkStruct_020a7f60 data_020da240[];
void func_0209eb6c(int idx) {
    *(unsigned char *) ((long long) ((int) &data_020da240[idx] + 8)) += 1;
}

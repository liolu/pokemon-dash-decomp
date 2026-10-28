/* compiler: 2.0/sp1p5 -O4,p -ipa file -inline on,noauto */
/* func_02050c14 from https://github.com/tangosdev/sm64ds-decomp src/engine/sound/SoundEngine.cpp (license: MIT), reused by
 * tools/donor_match.py */
extern "C" {
extern char *data_020d7e6c;
extern int func_02096c24(unsigned int id);
}
extern "C" int func_02096c24(unsigned int id) {
    char *root = data_020d7e6c;
    char *sub  = *(char **) (root + 0x84);
    int off    = *(int *) (sub + 0xc);
    char *tbl  = (off == 0) ? 0 : sub + off;
    if (tbl == 0) {
        return 0;
    }
    if ((int) id < 0) {
        return 0;
    }
    if (id >= *(unsigned *) tbl) {
        return 0;
    }
    int v      = ((int *) (tbl + id * 4))[1];
    char *base = *(char **) (root + 0x84);
    return (v == 0) ? 0 : (int) (base + v);
}

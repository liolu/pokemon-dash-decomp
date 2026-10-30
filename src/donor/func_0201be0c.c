/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a88a0 from https://github.com/banatic/acww-decomp src/main/func_020a88a0.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern char data_020cd3d0;
extern char data_020cd400;
extern void func_0201c03c(void *);
extern void func_02081f64(void *);
typedef struct {
    void *vtable;
    int sub;
} UnkStruct_020a88a0;
void *func_0201be0c(UnkStruct_020a88a0 *self) {
    self->vtable = &data_020cd3d0;
    func_0201c03c(&self->sub);
    self->vtable = &data_020cd400;
    func_02081f64(self);
    return self;
}

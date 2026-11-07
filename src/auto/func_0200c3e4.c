/* compiler: 1.2/sp2p3 */
typedef struct V {
    int x;
    int y;
    int z;
} V;
typedef struct S {
    char pad[0x18];
    V v;
    char pad2[0xf0];
    void **obj;
} S;
extern void func_0200c8e4(void);
extern void func_0200c104(S *);
extern void func_0200c7a8(S *, int);
void func_0200c3e4(S *s) {
    V l;
    void **o;
    func_0200c8e4();
    func_0200c104(s);
    func_0200c7a8(s, 0x272d);
    l = s->v;
    if (l.y < 0x18000) {
        l.y = 0x28;
    } else {
        l.y -= 0x18000;
    }
    o = s->obj;
    (*(void (**)(void **, V *))((char *) *o + 0x2c))(o, &l);
}

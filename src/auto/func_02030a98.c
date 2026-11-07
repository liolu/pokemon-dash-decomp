/* compiler: 1.2/b56 */
typedef struct O {
    char **vt;
    int rc;
} O;
typedef struct S {
    char pad[0xb8];
    O *arr[2];
} S;
void func_02030a98(S *s) {
    int i = 0;
    int z = 0;
    do {
        O *o = s->arr[i];
        if (o != 0) {
            int *p = &o->rc;
            *p     = *p - 1;
            if (o->rc == 0) {
                O *q = s->arr[i];
                if (q != 0) {
                    (*(void (**)(O *))((char *) q->vt + 4))(q);
                }
            }
        }
        s->arr[i] = (O *) z;
        i++;
    } while (i < 2);
}

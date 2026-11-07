/* compiler: 1.2/b56 */
typedef struct E {
    int x;
    int y;
} E;
typedef struct D {
    E **cur;
    E **first;
    int pad;
    E **map;
    E *a;
    E *b;
} D;
D *func_0208a854(D *d) {
    if (d->b - d->a == 0x40) {
        if (d->cur == d->first) {
            d->cur = d->map;
        }
        d->cur--;
        d->b = *d->cur + 0x40;
        d->a = d->b;
    }
    d->a--;
    return d;
}

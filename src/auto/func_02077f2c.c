/* compiler: 1.2/b56 */
typedef struct D {
    int **cur;
    int **first;
    int pad;
    int **map;
    int *a;
    int *b;
} D;
D *func_02077f2c(D *d) {
    if (d->b - d->a == 0x80) {
        if (d->cur == d->first) {
            d->cur = d->map;
        }
        d->cur--;
        d->b = *d->cur + 0x80;
        d->a = d->b;
    }
    d->a--;
    return d;
}

#include <stdio.h>
#define CAP 3

int main(void) {
    char seq[] = "ABACADBEA", id[CAP];
    int last[CAP], n = 0, h = 0, k, i, v;

    for (k = 0; seq[k]; k++) {
        for (i = 0; i < n && id[i] != seq[k]; i++);
        if (i < n) {
            h++;
            last[i] = k;
            printf("%c:HIT\n", seq[k]);
            continue;
        }
        if (n < CAP) {
            i = n++;
            printf("%c:MISS\n", seq[k]);
        } else {
            for (v = 0, i = 1; i < CAP; i++)
                if (last[i] < last[v]) v = i;
            printf("%c:MISS (remove %c)\n", seq[k], id[v]);
            i = v;
        }
        id[i] = seq[k];
        last[i] = k;
    }

    printf("Hits=%d Misses=%d Hit rate=%.1f%%\n", h, k - h, 100.0 * h / k);
    return 0;
}

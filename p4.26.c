#include <stdio.h>

int main()
{
    long g[] = { 314, 3141, 31415, 314159 }, m[] = { 100, 1000, 10000, 100000 };
    long t, k = 0;
    double pi = 0, s = 1;

    for (t = 1; k < 4; t++, s = -s) {
        pi += s * 4 / (2 * t - 1);
        if (t <= 20) printf("%6ld  %.6f\n", t, pi);
        while (k < 4 && (long)(pi * m[k]) == g[k]) {
            printf("%.*f first reached after %ld terms\n", (int)k + 2, (double)g[k] / m[k], t);
            k++;
        }
    }
    return 0;
}
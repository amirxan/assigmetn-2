#include <stdio.h>

int main(void) {
    int c, a = 0, b = 0, cc = 0, d = 0, f = 0;

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') c -= 32;   

        if (c == 'A') ++a;
        else if (c == 'B') ++b;
        else if (c == 'C') ++cc;
        else if (c == 'D') ++d;
        else if (c == 'F') ++f;
        else if (c == '\n' || c == '\t' || c == ' ');
        else puts("Incorrect letter grade entered. Enter a new grade.");
    }

    printf("A: %d\nB: %d\nC: %d\nD: %d\nF: %d\n", a, b, cc, d, f);
}
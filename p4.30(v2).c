#include <stdio.h>

int main() {
    int c, a = 0, b = 0, cc = 0, d = 0, f = 0;

    puts("Enter letter grades. Enter Q to quit.");

    while ((c = getchar()) != 'Q' && c != 'q') {
        if (c >= 'a' && c <= 'z') c -= 32;   

        if (c == 'A') ++a;
        if (c == 'B') ++b;
        if (c == 'C') ++cc;
        if (c == 'D') ++d;
        if (c == 'F') ++f;
        if (!(c == 'A' || c == 'B' || c == 'C' || c == 'D' || c == 'F' ||
            c == '\n' || c == '\t' || c == ' '))
            puts("Incorrect letter grade entered. Enter a new grade.");
    }

    printf("A: %d\nB: %d\nC: %d\nD: %d\nF: %d\n", a, b, cc, d, f);
}
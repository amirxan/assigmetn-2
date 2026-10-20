#include <stdio.h>

int main()
{
    puts("(A)");
    for (int row = 1; row <= 10; ++row) {
        for (int col = 1; col <= row; ++col) {
            printf("%s", "*");
        }
        puts("");
    }

    puts("\n(B)");
    for (int row = 10; row >= 1; --row) {
        for (int col = 1; col <= row; ++col) {
            printf("%s", "*");
        }
        puts("");
    }

    puts("\n(C)");
    for (int row = 10; row >= 1; --row) {
        for (int space = 1; space <= 10 - row; ++space) {
            printf("%s", " ");
        }
        for (int col = 1; col <= row; ++col) {
            printf("%s", "*");
        }
        puts("");
    }

    puts("\n(D)");
    for (int row = 1; row <= 10; ++row) {
        for (int space = 1; space <= 10 - row; ++space) {
            printf("%s", " ");
        }
        for (int col = 1; col <= row; ++col) {
            printf("%s", "*");
        }
        puts("");
    }

    return 0;
}
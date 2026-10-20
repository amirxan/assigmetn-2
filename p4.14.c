#include <stdio.h>

int main(void)
{
    int factorial = 1;

    printf("%-10s %s\n", "Integer", "Factorial");

    for (int n = 1; n <= 5; n++) {
        factorial *= n;             
        printf("%-10d %d\n", n, factorial);
    }

    return 0;
}
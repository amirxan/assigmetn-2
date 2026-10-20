#include <stdio.h>

int main(void)
{
    printf("%-10s %-10s\n", "Celsius", "Fahrenheit");

    for (int c = 30; c <= 50; c++) {
        double f = 9.0 / 5.0 * c + 32;
        printf("%-10d %-10.1f\n", c, f);
    }

    return 0;
}
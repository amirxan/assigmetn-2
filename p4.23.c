#include <stdio.h>

int main()
{
    int amount = 100000;      
    const int rate = 5;       
    int year;

    int dollars, cents;

    printf("%s %s\n", "Year", "Amount on deposit");

    for (year = 1; year <= 10; ++year) {
        amount = (amount * (100 + rate) + 50) / 100;

        dollars = amount / 100;
        cents = amount % 100;

        printf("%d %d %d\n", year, dollars, cents);
    }

    return 0;
}
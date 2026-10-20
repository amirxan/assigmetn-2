#include <stdio.h>

int main()
{
    int x = 1;
    int earlyExit = 0;     

    while (x <= 10 && !earlyExit) {
        if (x == 5) {
            earlyExit = 1; 
        }
        else {
            printf("%u ", x);
            ++x;           
        }
    }

    printf("\nBroke out of loop at x == %u\n", x);
}
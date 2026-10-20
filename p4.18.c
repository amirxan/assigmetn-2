#include <stdio.h>

int main()
{
    int number;  
    int count = 0; 
    int i;

    printf("enter five numbers (between 1 and 30):\n");

    while (count < 5) {
        printf("Number %d: ", count + 1);

        if (scanf_s("%d", &number) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n');
                
            continue;
        }

        if (number < 1 || number > 30) {
            printf("Number must be between 1 and 30. Try again.\n");
            continue;
        }

        /* print the bar */
        for (i = 1; i <= number; i++) {
            printf("*");
        }
        printf("\n");

        count++;
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int rows;

    do {
        printf("Enter an odd number of rows (1-19): ");
        scanf_s("%d", &rows);
    } while (rows < 1 || rows > 19 || rows % 2 == 0);

    int mid = rows / 2;  

    for (int i = 0; i < rows; i++) {
        int dist = (i <= mid) ? (mid - i) : (i - mid);

        for (int s = 0; s < dist; s++) {
            printf(" ");
        }

        for (int j = 0; j < rows - 2 * dist; j++) {
            printf("*");
        }

        puts("");  
    }

    return 0;
}

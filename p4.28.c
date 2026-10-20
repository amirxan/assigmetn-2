#include <stdio.h>

int main(void)
{
    int paycode;
    double salary, hours, rate, sales, pieces, perPiece, pay;

    printf("Enter paycode (1=Manager, 2=Hourly, 3=Commission, 4=Piece worker, -1 to end): ");
    scanf_s("%d", &paycode);

    while (paycode != -1) {
        switch (paycode) {
        case 1: 
            printf("Enter weekly salary: ");
            scanf_s("%lf", &salary);
            pay = salary;
            printf("Manager's pay is $%.2f\n", pay);
            break;

        case 2:
            printf("Enter hourly wage: ");
            scanf_s("%lf", &rate);
            printf("Enter total hours worked: ");
            scanf_s("%lf", &hours);
            if (hours <= 40.0) {
                pay = hours * rate;
            }
            else {
                pay = 40.0 * rate + (hours - 40.0) * rate * 1.5;
            }
            printf("Hourly worker's pay is $%.2f\n", pay);
            break;

        case 3:
            printf("Enter gross weekly sales: ");
            scanf_s("%lf", &sales);
            pay = 250.0 + 0.057 * sales;
            printf("Commission worker's pay is $%.2f\n", pay);
            break;

        case 4:
            printf("Enter number of pieces produced: ");
            scanf_s("%lf", &pieces);
            printf("Enter pay per piece: ");
            scanf_s("%lf", &perPiece);
            pay = pieces * perPiece;
            printf("Piece worker's pay is $%.2f\n", pay);
            break;

        default:
            printf("Invalid paycode. Please enter 1, 2, 3, or 4.\n");
            break;
        }

        printf("\nEnter paycode (1=Manager, 2=Hourly, 3=Commission, 4=Piece worker, -1 to end): ");
        scanf_s("%d", &paycode);
    }

    return 0;
}
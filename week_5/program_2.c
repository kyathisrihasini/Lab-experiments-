#include <stdio.h>
void main() {
    float units, total_bill;

    printf("Enter total units");
  scanf("%f",&uits);
    if ( units < 0) {
        printf("\nInvalid input");
    }
    if (units <= 100) {
        total_bill = units * 1.50;
    } 
    else if (units <= 200) {
        total_bill = units * 2.50;
    } 
    else if (units <= 500) {
        total_bill = units * 4.00;
    } 
    else {
        total_bill = units * 6.00;
    }
    printf("\nTotal Bill Amount = %.2f", total_bill);
}

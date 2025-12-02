#include <stdio.h>

int main(void) {

    float loanamt, intrate, monthpay;

    printf("Enter the loan amount: ");
    scanf("%f", &loanamt);

    printf("Enter the interest rate: ");
    scanf("%f", &intrate);

    printf("Enter the monthly payment: ");
    scanf("%f", &monthpay);

    float monthlyrate = (intrate /100.00) / 12.00;
    float balance = loanamt;

    balance = balance + (balance * monthlyrate);
    balance = balance - monthpay;

    printf("Balance remaining after first payment: $%.2f\n", balance);

    balance = balance + (balance * monthlyrate);
    balance = balance - monthpay;

    printf("Balance remaining after second payment: $%.2f\n", balance);

    balance = balance + (balance * monthlyrate);
    balance = balance - monthpay;

    printf("Balance remaining after third payment: $%.2f\n", balance);

    return 0;
}
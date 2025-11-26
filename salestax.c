#include <stdio.h>

#define TAX (.05f)

int main(void)
{
    float amount;

    printf("Enter the amount of money:");
    scanf("%f", &amount);

    printf("Amount entered: $%.2f\n", amount);
    printf("Amount with tax added: $%.2f\n", (amount * TAX) + amount);

    return 0;
}

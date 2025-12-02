#include <stdio.h>

int main(void) {
     
    int dollar;

    printf("enter an amount in dollars: ");
    scanf("%d", &dollar);

    int bill20 = dollar / 20;
    int bill10 = (dollar - (bill20 * 20)) / 10;
    int bill5 = (dollar - (bill20 * 20) - (bill10 * 10)) / 5;
    int bill = dollar - (bill20 * 20) - (bill10 * 10) - (bill5 * 5);

    printf("$20 bills: %d\n", bill20);
    printf("$10 bills: %d\n", bill10);
    printf("$5 bills: %d\n", bill5);
    printf("$1 bills: %d\n", bill);

    return 0;
}
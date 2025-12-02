#include <stdio.h>

int main(void) {
     
    int x;

    printf("Enter in a number: ");
    scanf("%d", &x);

    int calc = (((((3 * x) + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("your answer is %d\n", calc);

    return 0;
}
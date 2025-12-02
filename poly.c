#include <stdio.h>

int main(void) {
     
    int x;

    printf("Enter in a number: ");
    scanf("%d", &x);

    int calc = ((3 * (x*x*x*x*x)) + (2 * (x*x*x*x)) - (5 * (x*x*x)) - (x*x) + (7 * x) - 6) ;

    printf("your answer is %d\n", calc);

    return 0;
}
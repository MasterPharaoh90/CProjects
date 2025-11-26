#include <stdio.h>

#define FRACTION (4.0f/3.0f)

int main(void)
{
    float radius;
    float pi = 3.14f;

    printf("Enter the radius of the sphere:");
    scanf("%f", &radius);

    float radiusCubed = radius * radius * radius;
    
    printf("The volume of a %.0f-meter radius sphere is: %.2f", radius , FRACTION * pi * radiusCubed);

    return 0;
}

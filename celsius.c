// Converts a Farenehit temperature to Celsius.

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
	float farenheit, celsius;
	
	printf("Enter the Farenheit temperature: ");
	scanf("%f", &farenheit);

	celsius = (farenheit - FREEZING_PT) * SCALE_FACTOR;

	printf("The temperature in celsius is: %.1f\n", celsius);

	return 0;
}

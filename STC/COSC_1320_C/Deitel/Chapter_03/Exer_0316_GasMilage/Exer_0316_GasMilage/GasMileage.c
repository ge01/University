#include <stdio.h>

// function main begins program execution
int main(void)
{
	// INITIALIZATION
	float gallons;            // Declare gallons variable
	float miles;              // Declare miles variable
	float milesPerGallon;     // Declare miles per gallon

	// PROCESSING
	// get gallons used(possibly the sentinel)
	printf("%s", "Enter the gallons used (-1 to end): ");
	scanf("%f", &gallons);

	// while the user has not as yet entered the sentinel
	while (gallons != -1)
	{
		// get miles driven
		printf("%s", "Enter the miles driven: ");
		scanf("%f", &miles);

		// calculate miles per gallon
		milesPerGallon = miles / gallons;

		// display miles per gallon
		printf("The miles/gallon for this tank was %.6f \n", milesPerGallon);

		// get gallons used(possibly the sentinel)
		printf("%s", "Enter the gallons used (-1 to end): ");
		scanf("%f", &gallons);
	}

	printf("\n\n\a");

}
//
// September 5, 2017
// This application calculates your daily drivning cost, so that
// you can estimate how much money could be saved by car pooling.
// The format and calculation for this application is based on 
// the website Calculator.net
#include <stdio.h>

// function main begins program execution
int main(void)
{
	// VARIABLS
	int totalMilesDrivenPerDay;		// Total miles driven per day
	int costPerGallonOfGasoline;	// Cost per gallon of gasoline
	int averageMilesPerGallon;		// Average miles per gallon
	int parkingFeesPerDay;			// Parking fees per day
	int tollsPerDay;				// Tolls per day
	int costPerDay;					// Cost per day for driving to work

	// GREETING
	printf("This application calculates your daily driving cost\n");
	printf("to and from work or school.\n\n");

	// INPUT
	printf("Enter total miles driven per day as an integer: ");
	scanf("%d", &totalMilesDrivenPerDay);

	printf("Enter cost per gallon of gasoline as an integer: ");
	scanf("%d", &costPerGallonOfGasoline);
	
	printf("Enter your cars average miles per gallon as an integer: ");
	scanf("%d", &averageMilesPerGallon);
		
	printf("Enter parking fees per day as an integer: ");
	scanf("%d", &parkingFeesPerDay);
	
	printf("Enter toll fees per day as an integer: ");
	scanf("%d", &tollsPerDay);
	printf("\n");

	// PROCESS
	costPerDay = totalMilesDrivenPerDay / averageMilesPerGallon * costPerGallonOfGasoline 
				 + parkingFeesPerDay + tollsPerDay;
		
	// OUTPUT
	if (costPerDay <= 0) {
		printf("Your cost per day for driving to work is less than a dollar.\n\n", costPerDay);
	}

	if (costPerDay > 0) {
		printf("Cost per day for driving to work is %d dollars.\n\n", costPerDay);
	}
}
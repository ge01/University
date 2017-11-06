//
// November 5, 2017
// A program to assign seats on each flight of an ailine's only
// plane (capacity: 10 seats).
#include <stdio.h>
#define SIZE 10 // maximum size of array

// function main begins program execution
int main(void)
{
	int seatAssignmentArray[SIZE] = { 0 };
	size_t i;                   // counter
	int seatClassType;
	int seatCounter1 = 0;
	int seatCounter2 = 5;
	int firstClassToEconomyClass = 0;
	int firstClassFull = 0;
	int economyClassFull = 0;

	size_t firstClass;
	size_t economyClass;

	printf_s("Airline Reservations System\n");
	printf_s("---------------------------\n");
	printf_s("1. First Class\n");
	printf_s("2. Economy Class\n\n");
	printf_s("Enter 1 or 2 to reserve a seat (-1 to exit): ");
	scanf_s("%d", &seatClassType);

	while (seatClassType != -1 && seatAssignmentArray[seatCounter2] <= 10) {

		switch (seatClassType)
		{
		case 1:

			if (seatAssignmentArray[seatCounter1] == 0 &&
				seatAssignmentArray[seatCounter1] < 5) {
				seatAssignmentArray[seatCounter1] = 1;
				++seatCounter1;
			}

			if (firstClassFull != 100) {
				printf_s("***********************************\n");
				printf_s("*          Boarding Pass          *\n");
				printf_s("*            Seat: %d              *\n", seatCounter1);
				printf_s("***********************************\n");
			}

			if (seatCounter1 > 4 && seatCounter2 < 11) {
				printf_s("First Class is full.\n");
				printf_s("Would you like an Economy Class Seat ( 3 = yes or 4 = no): ");
				scanf_s("%d", &firstClassToEconomyClass);

				if (firstClassToEconomyClass == 3) {
					seatAssignmentArray[seatCounter2] = 1;
					++seatCounter2;
					firstClassFull = 100;
				}
				else {
					printf_s("Next flight leaves in 3 hours\n");
					firstClassFull = 100;
				}
			}

			break;

		case 2:
			//printf_s("case 2");
			if (seatAssignmentArray[seatCounter2] == 0 &&
				seatAssignmentArray[seatCounter2] <= 10) {
				seatAssignmentArray[seatCounter2] = 1;
				++seatCounter2;
			}
			
			if (economyClassFull != 200) {
			printf_s("***********************************\n");
			printf_s("*          Boarding Pass          *\n");
			printf_s("*            Seat: %d              *\n", seatCounter2);
			printf_s("***********************************\n");
			}

			if (seatCounter2 > 9 && seatCounter1 < 5) {
				printf_s("Economy Class is full.\n");
				printf_s("Would you like an First Class Seat ( 3 = yes or 4 = no): ");
				scanf_s("%d", &firstClassToEconomyClass);



				if (firstClassToEconomyClass == 3) {
					seatAssignmentArray[seatCounter1] = 1;
					++seatCounter1;
					economyClassFull = 200;
				}
				else {
					printf_s("Next flight leaves in 3 hours\n");
					economyClassFull = 200;
				}
			}
			break;

		default:
			break;
		}

		printf_s("Enter 1 or 2 to reserve a seat (-1 to exit): ");
		scanf_s("%d", &seatClassType);

	} // end while
}
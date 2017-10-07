// 
// October 7, 2017
// This program reads a Product Number and Quntity Sold For One Day.
// It uses a switch statement to help determine the retail price
// for each product. It also desplays the total retail value of all
// products sold the previous week.
#include <stdio.h>

int main(void)
{
	// DECLARATION AND INITIALIZATION
	int holdProductNumber;     // holds the product number
	int quantitySold;          // holds quantity sold for one day
	float oneDayPrice1 = 0;    // = quantitySold * 2.98
	float oneDayPrice2 = 0;    // = quantitySold * 4.50
	float oneDayPrice3 = 0;    // = quantitySold * 9.98
	float oneDayPrice4 = 0;    // = quantitySold * 4.49
	float oneDayPrice5 = 0;    // = quantitySold * 6.87
	float oneDayPrice6 = 0;    // = quantitySold * 1.50
	float weekPrice1 = 0;      // += oneDayPrice1
	float weekPrice2 = 0;      // += oneDayPrice2
	float weekPrice3 = 0;      // += oneDayPrice3
	float weekPrice4 = 0;      // += oneDayPrice4
	float weekPrice5 = 0;      // += oneDayPrice5
	float weekPrice6 = 0;      // += oneDayPrice6

	// PROCESSING
	do {// loop until user enters -1
		
		// enter the product number
		printf("%s", "Enter the product number (-1 to end): ");
		scanf("%d", &holdProductNumber);

		// skip quantity sold if user enters -1 for the product number
		if (holdProductNumber != -1) {

			printf("%s", "Enter the quantity sold for one day: ");
			scanf("%d", &quantitySold);
		}

		// determine which product number was entered
		switch (holdProductNumber)
		{
		case 1: // product #1 daily and weekly price calculation 
			printf("%s", "Data for product number 1 was saved\n\n");
			oneDayPrice1 = quantitySold * 2.98;
			weekPrice1 += oneDayPrice1;
			break;
		case 2: // product #2 daily and weekly price calculation
			printf("%s", "Data for product number 2 was saved\n\n");
			oneDayPrice2 = quantitySold * 4.5;
			weekPrice2 += oneDayPrice2;
			break;
		case 3: // product #3 daily and weekly price calculation
			printf("%s", "Data for product number 3 was saved\n\n");
			oneDayPrice3 = quantitySold * 9.98;
			weekPrice3 += oneDayPrice3;
			break;
		case 4: // product #4 daily and weekly price calculation
			printf("%s", "Data for product number 4 was saved\n\n");
			oneDayPrice4 = quantitySold * 4.49;
			weekPrice4 += oneDayPrice4;
			break;
		case 5: // product #5 daily and weekly price calculation
			printf("%s", "Data for product number 5 was saved\n\n");
			oneDayPrice5 = quantitySold * 6.87;
			weekPrice5 += oneDayPrice5;
			break;
		case 6: // product #6 daily and weekly price calculation
			printf("%s", "Data for product number 6 was saved\n\n");
			oneDayPrice6 = quantitySold * 1.50;
			weekPrice6 += oneDayPrice6;
			break;
		default:// selected if user enters a number > 6
			if (holdProductNumber != -1) {
				printf("%s", "Incorrect prodcut number entered.\n\n");
			}
			break;
		}

	} while (holdProductNumber != -1);

	// TERMINATION
	puts("\n\n\nProduct Number\tWeekly Retail Value");
	puts("-----------------------------------");
	printf("1\t\t$%.2f\n", weekPrice1);
	printf("2\t\t$%.2f\n", weekPrice2);
	printf("3\t\t$%.2f\n", weekPrice3);
	printf("4\t\t$%.2f\n", weekPrice4);
	printf("5\t\t$%.2f\n", weekPrice5);
	printf("6\t\t$%.2f\n\n", weekPrice6);
}
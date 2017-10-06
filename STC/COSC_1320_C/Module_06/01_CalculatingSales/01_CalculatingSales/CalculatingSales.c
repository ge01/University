#include <stdio.h>

int main(void)
{
	int holdProductNumber;
	int quantitySold;
	int randomVariable;
	float oneDayPrice1 = 0;
	float oneDayPrice2 = 0;
	float oneDayPrice3 = 0;
	float oneDayPrice4 = 0;
	float oneDayPrice5 = 0;
	float oneDayPrice6 = 0;
	float weekPrice1 = 0;
	float weekPrice2 = 0;
	float weekPrice3 = 0;
	float weekPrice4 = 0;
	float weekPrice5 = 0;
	float weekPrice6 = 0;

	do {

		printf("%s", "Enter the product number (-1 to end): ");
		scanf("%d", &holdProductNumber);

		if (holdProductNumber != -1) {

			printf("%s", "Enter the quantity sold for one day: ");
			scanf("%d", &quantitySold);
		}

		switch (holdProductNumber)
		{
		case 1: 
			printf("%s", "Data for product number 1 was saved\n\n");
			oneDayPrice1 = quantitySold * 2.98;
			weekPrice1 += oneDayPrice1;
			break;
		case 2:
			printf("%s", "Data for product number 2 was saved\n\n");
			oneDayPrice2 = quantitySold * 4.5;
			weekPrice2 += oneDayPrice2;
			break;
		case 3:
			printf("%s", "Data for product number 3 was saved\n\n");
			oneDayPrice3 = quantitySold * 9.98;
			weekPrice3 += oneDayPrice3;
			break;
		case 4:
			printf("%s", "Data for product number 4 was saved\n\n");
			oneDayPrice4 = quantitySold * 4.49;
			weekPrice4 += oneDayPrice4;
			break;
		case 5:
			printf("%s", "Data for product number 5 was saved\n\n");
			oneDayPrice5 = quantitySold * 6.87;
			weekPrice5 += oneDayPrice5;
			break;
		case 6:
			printf("%s", "Data for product number 6 was saved\n\n");
			oneDayPrice6 = quantitySold * 1.50;
			weekPrice6 += oneDayPrice6;
			break;
		default:
			if (holdProductNumber != -1) {
				printf("%s", "Incorrect prodcut number entered.\n\n");
			}

			break;
		}

	} while (holdProductNumber != -1);

	puts("\n\n\nProduct Number\tWeekly Retail Value");
	puts("-----------------------------------");
	printf("1\t\t$%.2f\n", weekPrice1);
	printf("2\t\t$%.2f\n", weekPrice2);
	printf("3\t\t$%.2f\n", weekPrice3);
	printf("4\t\t$%.2f\n", weekPrice4);
	printf("5\t\t$%.2f\n", weekPrice5);
	printf("6\t\t$%.2f\n\n", weekPrice6);
}
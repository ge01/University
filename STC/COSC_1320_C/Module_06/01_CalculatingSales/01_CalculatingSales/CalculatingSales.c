#include <stdio.h>

int main(void)
{
	int productNumber;
	int quantitySold;

	do {

		printf("%s", "Enter the product number (-1 to end): ");
		scanf("%d", &productNumber);

		if (productNumber != -1) {
			
			printf("%s", "Enter the quantity sold for one day: ");
			scanf("%d", &productNumber);

			switch (productNumber)
			{


			default:
				break;
			}
		}

		

	} while (productNumber != -1);

	printf("%s", "\nGoodbye\n\n");
}
#include <stdio.h>

int main(void)
{

	// VARIABLES
	int inputNumber;
	int sum = 0;

	// INPUT
	printf("Enter one five-digit number: ");
	scanf("%d", &inputNumber);


	// PROCESS
	if (inputNumber / 10000 < 5)
		++sum;
	if (inputNumber / 1000 % 10 < 5)
		++sum;
	if (inputNumber / 100 % 10 < 5)
		++sum;
	if (inputNumber / 10 % 10 < 5)
		++sum;
	if (inputNumber % 10 < 5)
		++sum;

	// OUTPUT
	printf("# of integer(s) < 5 is %d \n", sum);

	//float numerator = 1;
	//float denominator = 2;
	//int count = 0;
	//float sum = 0;

	//while (count <= 100) {
	//	sum += numerator / denominator;
	//	++numerator;
	//	++denominator;
	//	++count;
	//}

	//printf("%.2f", numerator / denominator);
}

//int main(void)
//{
//	float percentOfProfit;
//	float productSell = 18.99;
//	float productCost = 12.5;
//
//	printf("%s", "A company is selling a product for $18.99 \n");
//	printf("%s", "A company cost is $12.50 \n");
//
//	percentOfProfit = productCost / productSell;
//
//	printf("Percent of profit is %.2f percent \n", percentOfProfit * 100);
//}

int main(void)
{
	float twoThirdacre;
	float squareMeterConvert;
	float acreValue = 43560;
	float squareMeterValue = 10.7639;
	
	twoThirdacre = acreValue * 2 / 3;
	squareMeterConvert = twoThirdacre * squareMeterValue / acreValue;

	printf("The number of square feet in 2/3 acre of land is: %.2f \n", twoThirdacre);
	printf("The number of square meters in 2/3 acre of land is: %.2f \n", squareMeterConvert);

}


//int main(void)
//{
//	int count = 0;
//	int clothes;
//	float clothesCost;
//	float clothesCostTotal = 0;	
//	
//	printf("%s", "Enter # of clothes:");
//	scanf("%d", &clothes);
//
//	while (count < clothes)
//	{
//		printf("Enter cost of clothes # %d: ", count + 1);
//		scanf("%f", &clothesCost);
//
//		clothesCostTotal += clothesCost;
//		++count;	
//	}
//
//	printf("The total amount spent to purchase the clothes was $%.2f \n", clothesCostTotal);
//}



#include <stdio.h>

// function main begins program execution
int main(void)
{
	// DECLARATION
	int n;		// nonnegative integer
	int count = 1;	// 
	int factorial = 1; 
	float eulersNumber;

	// PROCESSING
	printf("%s", "Enter a nonnegative integer and I will \n");
	printf("%s", "print its factorial and \n");
	printf("%s", "estimate the value of the mathematical constant theta \n");
	printf("%s", "by using the formula: e=1+1/1!+1/2!+1/3! \n");
	scanf("%d", &n);

	while (count <= n) 
	{
		factorial *= count;

		if (count == 1) {
			eulersNumber = (1.0 / factorial) + 1;
		}
		else
		{
			eulersNumber += (1.0 / factorial);
		}
		

		++count;
	}

	printf("factorial is %d \n", factorial);
	printf("e is %.8f\n", eulersNumber);
		

}
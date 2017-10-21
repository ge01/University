//
//
//
#include <stdio.h>

int main(void)
{
	int i, n, num0 = 0, num1 = 1, numNext;

	printf("Enter the nth Fibonacci number: ");
	scanf("%d", &n);

	printf("Fibonacci Series: ");

	for (i = 1; i <= n; ++i)
	{
		printf("%d, ", num0);
		numNext = num0 + num1;
		num0 = num1;
		num1 = numNext;
	}
}
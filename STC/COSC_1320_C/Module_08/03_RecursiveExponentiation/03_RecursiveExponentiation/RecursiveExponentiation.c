#include<stdio.h>

// function prototype
int power(int base, int exponent);

// function main begins program execution
int main()
{
	// declare variables
	int base;
	int exponent;

	// get the base
	printf("Enter an integer for the base: ");
	scanf("%d", &base);

	// get the exponent
	printf("Enter an integer for the exponent: ");
	scanf("%d", &exponent);


	printf("%d^%d = %d\n", base, exponent, power(base, exponent));
	return 0;
}

//
int power(int base, int exponent)
{
	if (exponent == 1) return base;
	else return base*power(base, exponent - 1);
}

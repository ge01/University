//
// October 21, 2017
// This program has a the recursive function power(base, exponent) that when
// invoked returns base^exponent.  For example, power(3,4) = 3*3*3*3.
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

	// print base, exponent, and result
	printf("%d^%d = %d\n", base, exponent, power(base, exponent));
	return 0;
}

// power function definition
int power(int base, int exponent)
{
	if (exponent == 1) 
		return base;
	else 
		return base * power(base, exponent - 1);
}

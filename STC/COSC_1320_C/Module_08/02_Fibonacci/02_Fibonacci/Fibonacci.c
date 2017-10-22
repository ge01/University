//
// October 21, 2017
// This program contains a nonrecursive function fibonacci(n) that calculates 
// the nth Fibonacci number.
// The largest number that can be printed on my system is 764848393.
#include <stdio.h>

// function prototype
unsigned long long int fibonacci(int n);

int main(void)
{
	// declare variables
	int nth;
	int i;

	// get the nth Fibonacci number
	printf("Enter the nth number in the Fibonacci sequence: ");
	scanf("%d", &nth);

	// loop through the fibonacci function 
	for (i = 0; i < nth; ++i) {
		
		// print fibonacci number
		printf("%d ", fibonacci(i));
	}
}

// fibonacci function definition returns the next number in
// the fibonacci sequence
unsigned long long int fibonacci(int n)
{
	// local variables
	int num0 = 0;
	int num1 = 1;
	int numNext = 0;
	int i;

	// determine next number in fibonacci sequence
	if (n <= 1) {
		return n;
	}
	else {
		for (i = 2; i <= n; ++i) {
			numNext = num0 + num1;
			num0 = num1;
			num1 = numNext;
		}
		return numNext;
	}
}
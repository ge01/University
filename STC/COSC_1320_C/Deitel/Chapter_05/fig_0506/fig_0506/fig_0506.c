// Fig. 5.6: fig_0506.c
// Demonstrating the function call stack
// and stack frames using a function square.
#include <stdio.h>

int square(int); // prototype for function square

int main(void)
{
	int a = 10; // value to square (local automatic variable in main)

	printf("%d squared: %d\n", a, square(a)); // display a squared
} // end main

// returns the quare of an integer
int square(int x) // x is a local variable
{
	return x * x; // calculate square and return result
} // end function square
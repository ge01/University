//
// October 13, 2017
// This program has a function called DisplayEvents that will take a single integer
// value as a parameter and will display all even numbers up to that number
// taken as a parameter.
#include <stdio.h>

int DisplayEvens(int); // prototype for function DisplayEvens

int main()
{
	int a = 11; // value to DisplayEvens (local automatic variable in main)

	// program output header
	printf("Even numbers up to %d\n", a);
	printf("%s", "--------------------\n");
	
	// call DisplayEvens() function
	DisplayEvens(a);
	puts("");

} // end main

// display all even numbers up to the number taken as a parameter
int DisplayEvens(int x) // x is a local variable
{
	// loop up to the number taken as a parameter
	for (int i = 0; i <= x; i += 2) {
		printf("\t%d\n", i);		
	}
}
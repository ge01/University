


#include <stdio.h>

// function main begins program execution
int main(void)
{
	// DECLARATION AND INITIALIZATION I
	int n;				// holds a nonnegative integer
	int count = 1;		// counter variable for while loops
	int factorial = 1;	// holds factorial value
	float eulersNumber;	// estimated value for euler's number (e)

	// PROCESSING I
	printf("%s", "This part of the program reads a nonnegative integer \n");
	printf("%s", "and computes and prints it's factorial. \n");
	printf("%s", "Please enter a nonnegative integer: ");
	scanf("%d", &n);

	// loop n times set by user
	while (count <= n) 
	{
		factorial *= count;		// compute factorial
		++count;				// increment counter
	}

	printf("factorial is %d \n", factorial);	// display result
	
	// INITIALIZATION II
	n = 10;
	count = 1;
	factorial = 1;
	
	// PROCESSING II
	while (count <= n)
	{
		factorial *= count;							// compute factorial

		if (count == 1) {							// estimate euler's number
			eulersNumber = (1.0 / factorial) + 1;	// 1 + 1/1! + ...
		}
		else										// ... + 1/10!
		{
			eulersNumber += (1.0 / factorial);
		}
		
		++count;									// increment counter
	}

	printf("e is %.5f\n", eulersNumber);			// display result
		

}
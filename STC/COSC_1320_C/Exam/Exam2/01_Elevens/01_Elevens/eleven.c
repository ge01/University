//
// October 27, 2017
// Multiples of 5 on 9/30/17 is a better implementation.
#include <stdio.h>

int main(void)
{
	int numberOfElevens;
	int count;
	int addElevens = 0;
	int sumOfElevns = 0;	

	printf("%s", "This program adds up multiples of 11's.\n");
	printf("%s", "based on the nth integer entered by \n");
	printf("%s", "the user. \n\n");
	printf("%s", "Enter an integer: ");
	scanf("%d", &numberOfElevens);
	puts("");

	for (count = 0; count < numberOfElevens; ++count) {
		
		addElevens += 11;		
		sumOfElevns += addElevens;
		printf("%d ", addElevens);
	}

	printf("\n\nThe sum of the %d elevens is %d.\n", numberOfElevens, sumOfElevns);
}
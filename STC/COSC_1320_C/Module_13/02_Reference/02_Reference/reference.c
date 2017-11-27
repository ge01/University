// 
// November 27, 2017
// This program is a modification to the listing code in Fig. 7.7 in the
// textbook to have one more function studentByReference(). In it, it updates
// the student's name and address.

#include <stdio.h>

void cubeByReference(int *nPtr); 
void studentByReference(char * studentinfo);

int main(void)
{
	// Initialization
	int number = 5; 
	char studentString[] = "\nDon Quixote\n5487 Eagerest Dr.\nMentor, Ohio 52478";

	// Use cubeByReference
	printf("The original value of number is %d", number);	
	cubeByReference(&number);
	printf("\nThe new value of number is %d\n", number);

	// Use studentByReference
	puts("");
	printf_s("The students info before fucntion call: %s\n", studentString);
	studentByReference(studentString);	
	puts("");
	printf_s("The students info after function call: %s\n\n", studentString);
} // end main

  // Calculate cube of *nPtr; actually modifies number in main
void cubeByReference(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
} // end function cubeByReference

// Update student's name and address
void studentByReference(char * studentinfo)
{
	// Initialization
	char studentUpdate[] = "\nJuan Haldudo\n1245 Jalisco Rd.\nParis, Texas 75268";
	int j = 0;

	// Update students info one character at a time
	for (int i = 0; *studentinfo != '\0'; ++i) {
		*studentinfo = studentUpdate[i];
		++studentinfo;
	} // end for
} // end function studentByReference
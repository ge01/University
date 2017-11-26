// 
// 

#include <stdio.h>

void cubeByReference(int *nPtr); 
void studentByReference(char * studentinfo);

int main(void)
{
	int number = 5; // initialize number
	char studentString[] = "\nDon Quixote\n5487 Eagerest Dr.\nMentor, Ohio 52478";

	printf("The original value of number is %d", number);
	// pass address of number to cubeByReference
	cubeByReference(&number);
	printf("\nThe new value of number is %d\n", number);

	puts("");
	printf_s("The students info before fucntion call: %s\n", studentString);
	studentByReference(studentString);
	puts("");
	printf_s("The students info after function call: %s\n\n", studentString);
} // end main

  // calculate cube of *nPtr; actually modifies number in main
void cubeByReference(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
} // end function cubeByReference

void studentByReference(char * studentinfo)
{
	char studentUpdate[] = "\nJuan Haldudo\n1245 Jalisco Rd.\nParis, Texas 75268";
	int j = 0;

	for (int i = 0; *studentinfo != '\0'; ++i) {
		*studentinfo = studentUpdate[i];
		++studentinfo;
	}

	//while (*studentinfo != '\0') {
	//	*studentinfo = studentUpdate[j];
	//	++studentinfo;
	//	++j;
	//}
}
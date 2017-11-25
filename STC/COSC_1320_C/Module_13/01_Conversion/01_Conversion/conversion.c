// Fig. 7.10 fig_0710.c
// Converting a string to uppercase using 
// non-constant pointer to non-constant data.
#include <stdio.h>
#include <ctype.h>

void convertToUppercase(char *sPtr); // prototype
void convertToLower(char *sPtr); // prototype
void printCharacters(const char *sPtr);

int main(void)
{
	char string[] = "cHaRaCters and $32.98"; // initialize char array

	printf("The string before conversion is: %s", string);
	convertToUppercase(string);
	printf("\nThe string after conversion is: %s", string);
	convertToLower(string);
	printf("\nThe string after conversion is: %s", string);
	printCharacters(string);
	printf("\nThe string after conversion is: %s", string);
	puts("");
} // end main

// convert string to uppercase letters
void convertToUppercase(char *sPtr)
{
	while (*sPtr != '\0') { // current character is not '\0'
		*sPtr = toupper(*sPtr); // convert to uppercase
		++sPtr; // make sPtr point to the next character
	} // end while
} // end function convertToUppercase

// convert string to lowercase letters
void convertToLower(char *sPtr)
{
	while (*sPtr != '\0') { // current character is not '\0'
		*sPtr = tolower(*sPtr); // convert to lowercase
		++sPtr; // make sPtr point to the next character
	} // end while
} // end function convertToLowercase

// sPtr cannot modify the character to which it points,
// i.e., sPtr is a "read-only" pointer
void printCharacters(const char *sPtr)
{
	// loop through entire string
	for (; *sPtr != '\0'; ++sPtr) { // no initialization
		printf("%c", *sPtr);
	} // end for
} // end function printCharacters
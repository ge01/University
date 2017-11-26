//
// November 25, 2017
// Case Conversion C-String
#include <stdio.h>
#include <ctype.h>

// prototypes
void convertToUppercase(char *sPtr0); 
void convertToLower(char *sPtr1); 
void printCharacters(const char *sPtr2);

int main(void)
{
	char string0[] = "cHaRaCters and $32.98"; // initialize char array0
	char string1[] = "GOOGLE.COM"; // initialize char array1
	char string2[] = "COSC 1320"; // initialize char array2

	printf("The string before conversion is: %s", string0);
	convertToUppercase(string0);
	printf("\nThe string after conversion is: %s\n", string0);

	printf("The string before conversion is: %s", string1);
	convertToLower(string1);
	printf("\nThe string after conversion is: %s\n", string1);

	printCharacters(string2);
	puts("");
} // end main

// convert string to uppercase letters
void convertToUppercase(char *sPtr0)
{
	while (*sPtr0 != '\0') { // current character is not '\0'
		*sPtr0 = toupper(*sPtr0); // convert to uppercase
		++sPtr0; // make sPtr0 point to the next character
	} // end while
} // end function convertToUppercase

// convert string to lowercase letters
void convertToLower(char *sPtr1)
{
	while (*sPtr1 != '\0') { // current character is not '\0'
		*sPtr1 = tolower(*sPtr1); // convert to lowercase
		++sPtr1; // make sPtr1 point to the next character
	} // end while
} // end function convertToLowercase

// sPtr2 cannot modify the character to which it points,
// i.e., sPtr2 is a "read-only" pointer
void printCharacters(const char *sPtr2)
{
	// loop through entire string
	for (; *sPtr2 != '\0'; ++sPtr2) { // no initialization
		printf("%c", *sPtr2);
	} // end for
} // end function printCharacters
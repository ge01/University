#include <stdio.h>

// Function prototypes

int main(void)
{
	int size;
	printf_s("\nEnter the size of the array: ");
	scanf_s("%d", &size);

	int *A;

	A = (int*)malloc(size * sizeof(int));

	printf_s("\nEnter the values of the array: ");
	int i;
	for (i = 0; i < size; i++)
		scanf("%d", &A[i]);

	printf_s("\nThe values in the array are: \n");
	for (i = 0; i < size; i++)
		printf("%d\t", A[i]);
}
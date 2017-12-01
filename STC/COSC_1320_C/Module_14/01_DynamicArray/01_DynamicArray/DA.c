//
//
// 

#include <stdio.h>
#include <stdlib.h>
void bubbleSort1(int *a, int n);
void bubbleSort2(int *a, int n);

int main(void)
{
	int *p, *a;   // dynamic array pointer
	int i, n;

	int b[5] = { 1,2,3,4,5 };  // static array

	//// dynamic array P set up and initialization

	p = (int*) calloc(10, sizeof(int));  // Make double array of 10 elements

	for (i = 0; i < 10; i++)
		*(p + i) = i;			// put value i in array element i, same as p[i] = i;

	for (i = 0; i < 10; i++)
		printf("*(p + %d) = %d\n", i, *(p + i));    // print p[i]

	// dynamic array a set up and initialization
	printf("Number of elements to be entered: ");
	scanf_s("%d", &n);

	a = (int*)calloc(n, sizeof(int));  // creating a dynamic array for pointer a using size n

	printf("Enter %d numbers:\n", n);
	for (i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}

	printf("The numbers entered are: ");
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	//bubbleSort1(a, n); // sorting out array a
	bubbleSort2(a, n); // sorting out array a

	printf("The numbers in dynamic array a sorted are\n: ");
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	free(a);  // release pointer
	free(p);  // release pointer
}

void bubbleSort1(int *a, int n)  // array notation
{
	int i, temp, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

void bubbleSort2(int *a, int n)
{
	int i, temp, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if ((*(a + j)) > (*(a + j + 1)))  // same as if(a[j]>a[j+1]
			{
				temp = *(a + j);          // same as temp=a[j];
				*(a + j) = *(a + j + 1);  // same as a[j]=a[j+1];
				*(a + j + 1) = temp;      // same as a[j+1] = temp;
			}
		}
	}
}
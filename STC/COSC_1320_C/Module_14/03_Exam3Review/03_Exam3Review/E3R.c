//
// December 3,
// This program dynamically allocates an array of structues large enough to
// allow user to define a number of name sales amount pairs
#include <stdio.h>
#include <stdlib.h>

struct salesPerson
{
	char name[20];
	int sales;
};

typedef struct salesPerson SalesPerson;

// Prototypes
void bubbleSort3(SalesPerson *a, int n);
int getAverage(SalesPerson *a, int n);
void calculateCommission(SalesPerson *a, int n);

// Main function
int main()
{
	int *a;   // dynamic array pointer
	int i, n;

	struct salesPerson *s;
	
	// dynamic array s set up and initialization
	printf("How many sales to be entered for the dynamic array? ");
	scanf_s("%d", &n);

	a = (int*)calloc(n, sizeof(int)); 

	// creating a dynamic array for pointer s using size n
	s = (SalesPerson*)calloc(n, sizeof(SalesPerson));

	printf("Enter %d sales person's name and sales for the dynamic array:\n", n);
	for (i = 0; i < n; i++) {
		printf("Enter Name: ");
		scanf("%s", s[i].name);
		
		do {
			printf("Enter Sales: ");
			scanf("%d", &s[i].sales);
		} while (s[i].sales < 0);
		
	}

	puts("");
	printf("This is the information that you have entered for the array before sorting:\n");
	for (i = 0; i < n; i++)
	{
		printf("%s ", s[i].name);

		printf("grade %d\n", s[i].sales);
	}


	bubbleSort3(s, n);

	puts("");
	printf("This is the information that you have entered for the array after sorting:\n");
	for (i = 0; i < n; i++)
	{
		printf("%s ", s[i].name);
		printf("Sales %d\n", s[i].sales);
	}

	puts("");
	printf("The averge sales is: %d", getAverage(s, n));
	puts("");

	calculateCommission(s, n);

	puts("");
	printf("This is the commissions for each rep:\n");
	for (i = 0; i < n; i++)
	{
		printf("%s ", s[i].name);
		printf("Sales %d\n", s[i].sales);
	}

	free(s);  // release pointer

	return(0);
}

// Sort function
void bubbleSort3(SalesPerson *a, int n) 
{	
	int i, temp, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (a[j].sales > a[j + 1].sales)
			{
				temp = a[j].sales;
				a[j].sales = a[j + 1].sales;
				a[j + 1].sales = temp;
			}
		}
	}
}

// Average function
int getAverage(SalesPerson *a, int n)
{
	int total = 0;
	int i;

	for (i = 0; i < n; i++)
	{
		total += a[i].sales;
	}

	return total / n;
}

// Commission function
void calculateCommission(SalesPerson *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i].sales > 2000) {
			a[i].sales = a[i].sales * .09;
		}
		else {
			a[i].sales = a[i].sales * .05;
		}
	}
}
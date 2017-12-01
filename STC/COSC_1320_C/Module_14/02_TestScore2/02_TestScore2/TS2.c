

#include <stdio.h>
#include <stdlib.h>

struct studentGrades
{
	char name[20];
	int grade;
};

typedef struct studentGrades studentGrades;

void bubbleSort1(studentGrades *a, int n);
void bubbleSort2(studentGrades *a, int n);

int main()
{
	int *a;   // dynamic array pointer
	int i, n;

	struct studentGrades *s;
	struct studentGrades p[3];
	puts("please enter student's info for array p:");

	for (i = 0; i < 3; i++)
	{
		printf("enter name:\n");
		scanf("%s", p[i].name);
		printf("enter grade:\n");
		scanf("%d", &p[i].grade);
	}

	printf("This is the information that you have entered for array P:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%s: ", p[i].name);
		printf("grade %d:\n", p[i].grade);
	}

	// dynamic array s set up and initialization
	printf("How many grades to be entered for dynamic array s?");
	scanf_s("%d", &n);

	a = (int*)calloc(n, sizeof(int)); // creating a dynamic array for pointer a using size n

	// creating a dynamic array for pointer s using size n
	s = (studentGrades*)calloc(n, sizeof(studentGrades));

	printf("Enter %d student's name and grade for dynamic array s:\n", n);
	for (i = 0; i < n; i++) {
		printf("enter name:\n");
		scanf("%s", s[i].name);
		printf("enter grade:\n");
		scanf("%d", &s[i].grade);
	}

	printf("This is the information that you have entered for array s before sorting:\n");
	for (i = 0; i < 3; i++) 
	{
		printf("%s: ", s[i].name);

		printf("grade %d:\n", s[i].grade);
	}

	bubbleSort2(p, 3); // function call
	bubbleSort2(s, n);

	printf("This is the information that you have entered for array p after sorting:\n");
	for (i = 0; i < n; i++)
	{
		printf("%s: ", p[i].name);
		printf("grade %d:\n", p[i].grade);
	}

	printf("This is the information that you have entered for array s after sorting:\n");
	for (i = 0; i < n; i++)
	{
		printf("%s: ", s[i].name);
		printf("grade %d:\n", s[i].grade);
	}

	free(s);  // release pointer

	return(0);
}

void bubbleSort1(studentGrades *a, int n)  // array notation
{
	int i, temp, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (a[j].grade > a[j + 1].grade);
			{
				temp = a[j].grade;
				a[j].grade = a[j + 1].grade;
				a[j + 1].grade = temp;
			}
		}
	}
}
void bubbleSort2(studentGrades *a, int n)
{
	int i, temp, j;
	for (i = 0; j < n - 1; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if ((*(a + j)).grade > (*(a + j + 1)).grade)    // same as if(a[j].grade >a[j+1].grade)
			{
				temp = (*(a + j)).grade;       // same as temp=a[j].grade;
				(*(a + j)).grade = (*(a + j + 1)).grade;  // same as a[j].grade=a[j+1].grade;
				(*(a + j + 1)).grade = temp;      // same as a[j+a] = temp;
			}
		}
	}
}
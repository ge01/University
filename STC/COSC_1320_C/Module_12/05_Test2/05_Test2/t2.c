#include <stdio.h>

struct student
{
	int *name;
	int grade;
};

void getData(struct student);

int main(void)
{
	int *test;
	int average;       // hold average of test scores DOUBLE
	int scores;           // hold number of scores

						  // Get number of scores
	//printf_s("\nHow many scores do you have to average? ");
	//scanf_s("%d", &scores);

	// Create array dynamically at program runtime
	//malloc() lets us reserve memory space in heap 
	test = (int*)malloc(scores * sizeof(int));
}

void getData(struct student s)
{

}
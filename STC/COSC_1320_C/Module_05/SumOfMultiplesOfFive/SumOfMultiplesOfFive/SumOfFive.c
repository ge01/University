#include <stdio.h>

int main(void)
{
	int sumNum = 0;
	int count;

	for (count = 5; count <= 100; count += 5) {
		sumNum += count;
		printf("%d ", count);
		//printf("%d ", sumNum);
	}
	printf("\n");
	printf("Total is %d", sumNum);
	printf("\n");
}
#include <stdio.h>

void increment(int HarryPotter) {
	HarryPotter++;
}


int main(void) {
	int HarryPotter = 7;
	increment(HarryPotter);
	printf("My number is now: %d\n", HarryPotter);

	int * p;
	for (int i = 0; i<10; i++) {
		int c = 10;
		p = &c;
		printf("%d ", *p);
	}
	printf("%d ", *p);

	int a[100];
	char c[100];
	double d[100];
	printf("%d ", sizeof(a));
	printf("%d ", sizeof(c));
	printf("%d ", sizeof(d));



	return 0;
}

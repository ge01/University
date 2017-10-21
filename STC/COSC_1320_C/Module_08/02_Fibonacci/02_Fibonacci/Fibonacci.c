//
//
//
#include <stdio.h>

unsigned long long int fibonacci(int n);

int main(void)
{
	int fibNum;
	int i;

	for (i = 0; i <= 12; ++i) {
		fibNum = fibonacci(i);
		printf("%d\n\n", fibNum);
	}
}

unsigned long long int fibonacci(int n)
{
	int f2 = 0;
	int f1 = 1;
	int fib = 0;
	int i;

	if (n == 0 || n == 1)
		return n;

	for (i = 2; i <= n; ++i) {
		fib = f1 + f2;
		f2 = f1;
		f1 = fib;
	}
	return fib;
}
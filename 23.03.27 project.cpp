#include <stdio.h>

int sum_of_N(int n)
{
	int sum = 0;
	for (int i = 0; i < n + 1; i++) {
		sum = sum + i;
	}
	return sum;
}

int sum_of_N2(int n) {
	return (n * (n + 1)) / 2;
}

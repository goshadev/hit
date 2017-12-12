#define _CRT_SECURE_NO_WARNINGS
/* Assigned by:
Georgi Churilov
ID:312112139 */
#include <stdio.h>
#include <math.h>

int foo(unsigned int n)
{
	int i;
	int sum = 0;

	for (i = 1; i < n; i++){
		if (n % i == 0)
			sum += i;
	}

	if (sum == n)
		return n;

	return 0;
}


void main()
{
	int i;

	for (i = 1; i < 1000; i++){
		if (foo(i))
			printf("%d", i);
	}

	return;
}
	
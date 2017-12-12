#define _CRT_SECURE_NO_WARNINGS
/* Assigned by:
Georgi Churilov
ID:312112139 */
#include <stdio.h>
#include <math.h>

int get_prime(int n)
{
	int square_ceil = (int)ceil(sqrt((double)n));

	for (int i = 2; i <= square_ceil; i++){
		if (n % i == 0)
			return -1;
	}

	return n;
}

void main()
{
	int n1;
	int n2;
	int i;
	int square_ceil;
	int n;

	/* Ask the user to enter two integers */
	printf("enter 2 numbers:");
	scanf("%d", &n1);
	scanf("%d", &n2);

	for (i = n1; i <= n2; i++){
		if (get_prime(i) == -1)
			continue;

		printf("%d\n", i);
	}
}
	
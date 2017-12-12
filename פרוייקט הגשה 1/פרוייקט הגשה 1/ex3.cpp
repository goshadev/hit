#define _CRT_SECURE_NO_WARNINGS
/* Assigned by:
Georgi Churilov
ID:312112139 */
#include <stdio.h>
#include <math.h>

void main()
{
	unsigned int n;
	unsigned int res = 0;
	int tmp;

	/* Ask the user to enter two integers */
	printf("enter number:");
	scanf("%d", &n);

	while(n){
		tmp = n % 10;
		res *= 10;
		res += tmp;

		n /= 10;
	}

	printf("res: %d\n", res);
}
	
#define _CRT_SECURE_NO_WARNINGS
/* Assigned by:
Georgi Churilov
ID:312112139 */
#include <stdio.h> 
void main()
{
	int a,b,i=1,result=0;
	/* Ask the user to enter two integers */
	printf("enter 2 numbers:");
	scanf("%d%d",&a,&b);
	/* Summerize numbers efficiently. ... */
	if (b>=a) 
	{
		while (i<=a)
		{
			result=result+b;
			i++;
		}
		printf("result:%d\n",result);
	}
	else 
		{
		while (i<=b)
		{
			result=result+a;
			i++;
		}
	printf("result:%d\n",result);
	}}
	
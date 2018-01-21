#include <stdio.h>
#include <stdlib.h>

double avg(int a, int b, int c, int d, int e);

void main(void)
{
	int a, b, c, d, e;
	printf("input : ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	avg(a, b, c, d, e);
	
	printf("result : %lf", avg(a ,b ,c ,d ,e));
}

double avg(int a, int b, int c, int d, int e)
{
	double average = (double)(a + b + c + d + e) / 5;
	
	return average;
}
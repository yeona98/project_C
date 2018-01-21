#include <stdio.h>
#include <stdlib.h>

double avg(int a1, int a2, int a3, int a4, int a5);

void main(void)
{
	int a1, a2, a3, a4, a5;
	printf("input a number : ");
	scanf("%d %d %d %d %d", &a1, &a2, &a3, &a4, &a5);

	double result = avg(a1, a2, a3, a4, a5);

	printf("result : %lf", result);
}

double avg(int a1, int a2, int a3, int a4, int a5)
{
	int sum = a1 + a2 + a3 + a4 + a5;

	double avg = (double)sum / (double)5;

	return avg;
}
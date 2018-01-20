#include <stdio.h>
#include <stdlib.h>

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

double Div(int x, int y)
{
	return (double)x / y;
}

void main(void)
{
	int a = 0, b = 0;
	int sum = 0;

	printf("First num : ");
	scanf("%d", &a);

	printf("Second num :");
	scanf("%d", &b);

	sum = Add(a, b);
	printf("Add : %d\n", sum);

	sum = Sub(a, b);
	printf("Sub : %d\n", sum);

	sum = Mul(a, b);
	printf("Mul : %d\n", sum);

	double r = Div(a, b);
	printf("Div : %f\n", r);
	
	system("pause");
}
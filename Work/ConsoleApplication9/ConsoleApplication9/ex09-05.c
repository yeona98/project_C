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
	int num1 = 0;
	int num2 = 0;

	printf("First num : ");
	scanf("%d", &num1);
	printf("Second num :");
	scanf("%d", &num2);

	int add = 0;
	int sub = 0;
	int mul = 0;
	double div = 0;

	add = Add(num1, num2);
	sub = Sub(num1, num2);
	mul = Mul(num1, num2);
	div = Div(num1, num2);

	printf("Add : %d \n", add);
	printf("Sub : %d \n", sub);
	printf("Mul : %d \n", mul);
	printf("Div : %f \n", div);

	system("pause");
}
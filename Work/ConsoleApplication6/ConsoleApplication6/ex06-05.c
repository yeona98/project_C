#include <stdio.h>
#include <stdlib.h>
#define ip 10

void main(void)
{
	int a = 10;
	int b = 15;

	double result;

	result = a / b;
	printf("%lf \n", result);

	// 정수/정수 평생 안됨~~ 정수를 정수로 나누면 정수.
	result = (double) ( a / b );
	printf("%lf \n", result);
	
	// 실수/정수 나눌 수 있음.
	result = ( (double)a ) / b;
	printf("%lf \n", result);



	system("pause");
}
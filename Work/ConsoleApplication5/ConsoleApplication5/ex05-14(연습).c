#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	double number1 = 0.0;
	double number2 = 0.0;
	double number3 = 0.0;
	double number4 = 0.0;
	double number5 = 0.0;

	printf("input : ");
	scanf("%lf %lf l%f %lf %lf", &number1, &number2, &number3, &number4, &number5);

	printf("[%8.3lf]\n", number1);
	printf("[%8.3lf]\n", number2);
	printf("[%8.3lf]\n", number3);
	printf("[%8.3lf]\n", number4);
	printf("[%8.3lf]\n", number5);

	system("pause");
}
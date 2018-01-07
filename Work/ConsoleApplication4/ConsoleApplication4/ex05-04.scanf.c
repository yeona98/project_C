#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int    age    = 0;
	double weight = 0.0;

	printf("정수와 실수를 입력하시오 \n");
	scanf("%d %lf", &age, &weight);

	printf("입력 값은 : %d %lf", age, weight);
	

	system("pause");

	return 0;
}
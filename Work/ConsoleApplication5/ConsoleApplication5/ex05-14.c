#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	//float  ---> %f
	//double ---> %lf

	double d1 = 0.0, d2 = 0.0, d3 = 0.0, d4 = 0.0, d5 = 0.0;
	printf("input : ");
	scanf("%lf %lf %lf %lf %lf", &d1, &d2, &d3, &d4, &d5); // ÀØÁö¸»ÀÚ. &


	printf("[%9.3lf]\n", d1);
	printf("[%9.3lf]\n", d2);
	printf("[%9.3lf]\n", d3);
	printf("[%9.3lf]\n", d4);
	printf("[%9.3lf]\n", d5);

	system("pause");
}

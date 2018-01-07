#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	printf("[%5d] [%05d] [%-5d]\n", 10, 23, 45);
	printf("%8.4f\n", 23.4567);
	//[   10] [00023] [45   ]

	// 변수 선언
	char c1;
	int n1;
	float f1;

	// 변수 대입(넣는다)
	c1  = 'a';
	n1 = 200;
	f1 = 59.56;

	// c1, n1, f1을 printf를 이용하여 출력하시오.
	printf("\n[%c] [%d] [%f]\n", c1, n1, f1);

	// 변수 선언 & 초기화
	char c = 'A';
	int n = 123;
	double d = 3.14;

	// 출력 : printf
	printf("[%c] [%d] [%lf]\n", c, n, d);

	// debug시 결과화면 스탑시키기 위해.
	getchar();
}
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int num1 = 10, num2 = 5;

	printf("input : ");
	// 첫번째 %d 값은 num1의 주소값에 저장하시오.
	// 두번째 %d 값은 num2의 주소값에 저장하시오.
	scanf("%d %d", &num1, &num2);

	printf("입력값 : %d %d \n", num1, num2);

	int a = num1 + num2;
	int m = num1 - num2;
	int c = num1 * num2; // 곱하기 : 55
	int d = num1 / num2; // 나누기 : 2
	int r = num1 % num2; // 나머지 : 1, 11-5*(2(몫))=1

	printf("+: %d \n", a);
	printf("-: %d \n", m);
	printf("*: %d \n", c);
	printf("/: %d \n", d);
	printf("%%: %d \n", r);


	system("pause");
}
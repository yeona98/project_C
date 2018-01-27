#include <stdio.h>
#include <stdlib.h>
/* call by reference를 이용한 값의 교환 */
void exchange(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;

	return;
}


void main(void)
{
	int a = 5;
	int b = 7;
	printf("before exchange : a=%d, b=%d \n", a, b);
	exchange(&a, &b);
	printf("after  exchange : a=%d, b=%d \n", a, b);

	system("pause");
}
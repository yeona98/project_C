#include <stdio.h>
#include <stdlib.h>
/* call by value를 이용한 값의 교환(원본 값이 바뀌지 않는다.) */
void exchange(int p, int q)
{
	int temp = p;
	p = q;
	q = temp;

	printf("inner exchange : a=%d, b=%d \n", p, q);

	return;
}


void main(void)
{
	int a = 5;
	int b = 7;
	printf("before exchange : a=%d, b=%d \n", a, b);
	exchange(a, b);
	printf("after  exchange : a=%d, b=%d \n", a, b);

	system("pause");
}
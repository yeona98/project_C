#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int a = 2005;
	int* p = &a;
	printf("p : %d \n", p);
	printf("&a : %d \n", &a);

	(*p)++; // a++�� ���� �ǹ̸� ���Ѵ�
	printf("a : %d \n", a);
	printf("*p : %d \n", *p);

	*p++; // *(p++)�� ���� �ǹ̸� ���Ѵ�
	printf("a : %d \n", a);
	printf("*p : %d \n", *p);

}

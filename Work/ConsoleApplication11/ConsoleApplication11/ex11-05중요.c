#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 7;
	int *p = NULL;
	p = &a;

	printf("&a : %p \n", &a); // a�� �ּҰ�
	printf(" a : %d \n",  a); // a�� ��

	printf("&p : %p \n", &p); // p�� �ּҰ�
	printf(" p : %p \n",  p); // p�� ��
	printf("*p : %d \n", *p); // p�� ����Ű�� ��

	return EXIT_SUCCESS;
}
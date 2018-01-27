#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 7;
	int *p = NULL;
	p = &a;

	printf("&a : %p \n", &a); // a의 주소값
	printf(" a : %d \n",  a); // a의 값

	printf("&p : %p \n", &p); // p의 주소값
	printf(" p : %p \n",  p); // p의 값
	printf("*p : %d \n", *p); // p가 가리키는 값

	return EXIT_SUCCESS;
}
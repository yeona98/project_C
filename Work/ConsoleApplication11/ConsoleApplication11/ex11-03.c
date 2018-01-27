#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char c = 'a';
	int n = 7;

	int * p = NULL; // stdlib.h¿¡ Á¤ÀÇµÊ

	p = &n;

	printf("&n = %p \n", &n); // 7
	printf(" n = %d \n",  n); // 7


	printf("&p = %p \n", &p);
	printf(" p = %p \n",  p);
	printf("*p = %d \n", *p);

	system("pause");
}
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int a = 7;
	int * p = NULL;
	p = &a;

	a++;
	printf("a++ : %d \n", a);

	a = a + 1;
	printf("a = a + 1 : %d \n", a);

	*p = *p + 1;
	printf("*p = *p + 1 : %d \n", *p);

	system("pause");
}
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i = 3, j = 5, *p = &i, *q = &j, *r;
	double x;

	printf("p == &i     = %d \n", p == &i);
	printf("**&p        = %d \n", **&p);
	printf("r=&x        = %d \n", r=&x);
	printf("7**p/ *q+7  = %d \n", 7**p/ *q+7);
	printf("*(r=&j)*=*p = %d \n", *(r=&j)*=*p);
}
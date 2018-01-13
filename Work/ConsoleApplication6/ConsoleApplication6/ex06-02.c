#include <stdio.h>
#include <stdlib.h>

void main(main)
{
	int x = 3;
	int y = ++x;
	printf("%d \n", x); // 4
	printf("%d \n", y); // 4 

	printf("------------------\n");

	x = 3;
	y = x++;
	printf("%d \n", x); // 4
	printf("%d \n", y); // 3

}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 2005;

	printf("a  : %d \n", a);     //2005
	printf("\n");

	printf("&a x= %#p \n", &a);  // 0x??????
	printf("&a x= %#x \n", &a);  // 0x??????
	printf("&a d= %d \n", &a);  // 0x??????

	return EXIT_SUCCESS;
}
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int data = 0;

	printf("input : ");
	scanf("%d", &data);
	printf("output : %c \n", data); // 문자
	printf("output : %d \n", data); // 숫자

	system("pause");
}
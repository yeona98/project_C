#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int data = 0;

	printf("입력값 : ");
	scanf("%d", &data);

	//
	printf("출력값 : %d", data);
	
	// 계속하려면 아무 키나 누르십시오. 뜨게 만듬.
	system("pause");
}
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int score = 0;

	printf("Please enter your score : ");
	scanf("%d", &score);
	
	if (score >= 60)
	{
		printf("�հ�\n");
		printf("������");
	}
	else
	{
		printf("���հ�\n");
	}
	
	system("pause");
}
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int scores[3];
	int number = 0;
	
	printf("�л��� : ");
	scanf("%d", &number);
	
	for (int i = 0; i < number; i = i + 1)
	{
		printf("�л� %d�� ����: ", i + 1);
		scanf("&d", scores[i]);
		rewind(stdin);
		
	}

	int sum = 0;
	for (int i = 0; i < number; i = i + 1)
	{
		sum = sum + scores[i];
	}
	printf("���� ���� �հ�� : %d", sum);
	printf("���� ���� ����� : %d", sum / number);
	

	system("pause");
}
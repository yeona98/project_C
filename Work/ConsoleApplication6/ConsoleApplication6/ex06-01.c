#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int number1 = 1;
	int number2 = 1;

	int answer1 = 1;
	int answer2 = 1;
	int answer3 = 1;
	int answer4 = 1;

	printf("2���� ������ �Է��ϼ���.\n");
	printf("input : ");
	scanf("%d %d", &number1, &number2);

	answer1 = number1 + number2;
	answer2 = number1 - number2;
	answer3 = number1 * number2;
	answer4 = number1 / number2;

	printf("���ϱ� : %d\n", answer1);
	printf("����   : %d\n", answer2);
	printf("���ϱ� : %d\n", answer3);
	printf("������ : %d\n", answer4);

	system("pause");
}


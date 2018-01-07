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

	printf("2개의 정수를 입력하세요.\n");
	printf("input : ");
	scanf("%d %d", &number1, &number2);

	answer1 = number1 + number2;
	answer2 = number1 - number2;
	answer3 = number1 * number2;
	answer4 = number1 / number2;

	printf("더하기 : %d\n", answer1);
	printf("빼기   : %d\n", answer2);
	printf("곱하기 : %d\n", answer3);
	printf("나누기 : %d\n", answer4);

	system("pause");
}


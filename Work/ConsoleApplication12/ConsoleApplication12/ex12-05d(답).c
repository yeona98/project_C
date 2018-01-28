#include <stdio.h>
#include <stdlib.h>


int StringToInteger(char str[])
{
	int num = 0, count = 0;

	/* 문자열이 끝날 때까지 반복함 */
	for (; str[count] != 0; )
	{
		num = num * 10 + (str[count] - '0');
		count++; /* 다음 문자로 이동함 */
	}
	return num;
}

void main(void)
{
	char fnum[100] = "";
	char snum[100] = "";

	// 입력 받기
	printf("input first number : ");
	scanf("%s", &fnum);

	printf("input second number : ");
	scanf("%s", &snum);

	printf("%s, %s", fnum, snum);

	// 정수로 바꾸기.
	int num1 = StringToInteger(fnum);
	int num2 = StringToInteger(snum);

	printf("%s + %s = %d", fnum, snum, num1 + num2);
}


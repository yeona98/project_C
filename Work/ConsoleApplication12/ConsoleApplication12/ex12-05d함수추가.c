#include <stdio.h>
#include <stdlib.h>


int StringToInteger(char str[])
{
	int num = 0, count = 0;

	/* ���ڿ��� ���� ������ �ݺ��� */
	for (; str[count] != 0; )
	{
		num = num * 10 + (str[count] - '0');
		count++; /* ���� ���ڷ� �̵��� */
	}
	return num;
}

void input(char msg[], char num[100])
{
	printf("%s", msg);
	scanf("%s", num);
}


void main(void)
{
	char fnum[100] = "";
	char snum[100] = "";

	// �Է� �ޱ�.
	input("input first num: ", fnum);
	input("input second num: ", snum);

	// ������ �ٲٱ�.
	int num1 = StringToInteger(fnum);
	int num2 = StringToInteger(snum);

	printf("%s + %s = %d", fnum, snum, num1 + num2);
}


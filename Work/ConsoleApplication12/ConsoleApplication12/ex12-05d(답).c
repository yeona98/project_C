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

void main(void)
{
	char fnum[100] = "";
	char snum[100] = "";

	// �Է� �ޱ�
	printf("input first number : ");
	scanf("%s", &fnum);

	printf("input second number : ");
	scanf("%s", &snum);

	printf("%s, %s", fnum, snum);

	// ������ �ٲٱ�.
	int num1 = StringToInteger(fnum);
	int num2 = StringToInteger(snum);

	printf("%s + %s = %d", fnum, snum, num1 + num2);
}


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
	char num1_string[100] = { '\0' };
	char num2_string[100] = { '\0' };

	printf("input first number : ");
	scanf("%s", num1_string);

	printf("input second number : ");
	scanf("%s", num2_string);

	int num = StringToInteger(num1_string) + StringToInteger(num2_string);

	printf("%s + %s = %d", num1_string, num2_string, num);
}





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
	return num ;
}


void main(void)
{
	char num_string[] = "128853";

	// &num_string[0] == &num_string == num_string
	int num = StringToInteger(num_string);

	printf("%s -> %d \n", num_string, num);

	system("pause");
}
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
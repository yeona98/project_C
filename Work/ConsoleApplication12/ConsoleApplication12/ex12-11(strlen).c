#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str1[] = "abcde";
	char str2[10] = "";
	char str3[] = "Helle World";

	printf("str1�� ���� = %d \n", strlen(str1));
	printf("str2�� ���� = %d \n", strlen(str2));
	printf("str3�� ���� = %d \n", strlen(str3));

	return EXIT_SUCCESS;
}
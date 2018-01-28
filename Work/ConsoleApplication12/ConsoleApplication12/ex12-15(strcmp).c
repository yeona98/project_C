#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char s1[] = "ABC COMPANY";
	char s2[] = "ABC INC";

	printf("strcmp : %d \n", strcmp(s1, s2));
	printf("strncmp : %d \n", strncmp(s1, s2, 4));
	
	char s3[] = "ABC COMPANY";
	char s4[] = "ABC COMPANY";

	printf("strcmp : %d \n", strcmp(s3, s4));
	printf("strncmp : %d \n", strncmp(s3, s4, sizeof(s3) / sizeof(char)));

	char s5[] = "ABC COMPANY1";
	char s6[] = "ABC COMPANY";

	printf("strcmp : %d \n", strcmp(s5, s6));
	printf("strncmp : %d \n", strncmp(s5, s6, 11));

	system("pause");
}
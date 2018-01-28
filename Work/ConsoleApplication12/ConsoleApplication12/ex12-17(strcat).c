#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char s1[10] = "CON";
	char s2[] = "CATENATION";
	printf("strcat : %s \n", strcat(s1, s2));

	char s3[10] = "CON";
	char s4[] = "CATENATION";
	int size = sizeof(s3) / sizeof(char) - strlen(s3) - 1;
	printf("strncat : %s \n", strncat(s3, s4, size));


	system("pause");
}
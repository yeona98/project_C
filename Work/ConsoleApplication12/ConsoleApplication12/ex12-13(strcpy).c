#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char s1[10] = { '\0', };

	char s2[] = "Good Day";

	strcpy(s1, s2);
	printf("%s \n", s1);

	int size = sizeof(s1) / sizeof(char) - 1;
	strncpy(s1, "01234567890123456789", size);
	printf("%s \n", s1);

	strcpy(s1, "01234567890123456789");
	printf("%s \n", s1);

	
	system("pause");
}
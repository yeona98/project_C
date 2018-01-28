#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 배열의 선언과 초기화
	char str[10] = { '\0' };

	// 포인터의 선언과 초기화
	char * ptr = NULL;

	for (; str[0] == '\0'; )
	{
		printf("Enter a string: ");
		scanf("%9[0123456789.,-$]s", str);

		// 입력 버퍼 초기화
		fflush(stdin);
		rewind(stdin);
		flushall();
	}

	

	ptr = str;

	

	for (; *ptr != '\0'; ptr++)
	{
		printf("%c", *ptr);
	}

	printf("\n");



	return EXIT_SUCCESS;
}
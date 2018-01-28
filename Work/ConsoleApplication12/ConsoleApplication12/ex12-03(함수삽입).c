#include <stdio.h>
#include <stdlib.h>

void scanstring(char str[])
{
	// 매개변수로 배열을 사용하는 경우
	for (; str[0] == '\0'; )
	{
		printf("Enter a string: ");
		scanf("%9[0123456789.,-$]s", str);

		// 입력 버퍼 초기화
		fflush(stdin);
		rewind(stdin);
		flushall();
	}
}

int printstring(char *ptr)
{
	// 매개변수로 포인터를 사용하는 경우
	for (; *ptr != '\0'; ptr++)
	{
		printf("%c", *ptr);
	}

	printf("\n");

	return *ptr;
}


int main(void)
{
	// 배열의 선언과 초기화
	char str[10] = { '\0' };

	// 포인터의 선언과 초기화
	char * ptr = NULL;

	// 배열의 주소값 입력
	scanstring(str);

	ptr = str;
	
	// 포인터의 주소값 입력
	printstring(ptr);
	
	system("pause");

	return EXIT_SUCCESS;
}
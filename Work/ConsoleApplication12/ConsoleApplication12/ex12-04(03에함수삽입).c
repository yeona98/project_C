#include <stdio.h>
#include <stdlib.h>

void input(char s[])
{
	// 매개변수로 배열을 사용하는 경우
	for (; s[0] == '\0'; )
	{
		printf("Enter a string: ");
		scanf("%9[0123456789.,-$]s", s);

		// 입력 버퍼 초기화
		fflush(stdin);
		rewind(stdin);
		flushall();
	}
}

// char * p = ptr;
int output(char *p)
{
	// 매개변수로 포인터를 사용하는 경우
	for (; *p != '\0'; )
	{
		printf("%c", *p);
		p++;
	}

	printf("\n");

	return *p;
}


int main(void)
{
	// 배열의 선언과 초기화
	char str[10] = { '\0' };

	// 포인터의 선언과 초기화
	char * ptr = NULL;

	// 배열의 주소값 입력
	// &str[0] == &str == str
	input(str);

	ptr = str;

	// 포인터의 주소값 입력
	output(ptr);

	system("pause");

	return EXIT_SUCCESS;
}
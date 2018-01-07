#include <stdio.h>
#include <stdlib.h>

void main(void)
{

	// \n
	printf("Hello~Tipssoft.com\n");

	// \r
	printf("Hello~Tipssoft.com\rHi~~~~\n");
	printf("Hello~Tipssoft.com");
	printf("\r");
	printf("Hi~~~~\n");

	// \t 탭의 위치 이동. 8칸
	printf("12345678 12345678 12345678 12345678 \n");
	printf("a\tbc\tdef\tg");
	printf("\n");

	// \b : 캐럿을 한 칸 앞으로 이동
	printf("1234567");
	printf("\b");
	printf("\n");

	// debug 시 화면 멈춤
	getchar(); // enter 입력까지 기다림.
}
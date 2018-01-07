#include <stdio.h>
#include <stdlib.h>

/*
void main()
{
	int number = 0;
	
	printf("아스키코드로 변환할 숫자를 입력하세요.\n");
	scanf("%d", &number);
	
	printf("input : %d \n", number);
	printf("output : %c \n", number);

	system("pause");
}
*/

void main()
{
	int number = 0;

	printf("아스키코드로 변환할 숫자를 입력하세요.\n");
	printf("input : ");
	scanf("%d", &number);
	printf("output : %c \n", number);

	system("pause");
}
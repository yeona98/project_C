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

	// \t ���� ��ġ �̵�. 8ĭ
	printf("12345678 12345678 12345678 12345678 \n");
	printf("a\tbc\tdef\tg");
	printf("\n");

	// \b : ĳ���� �� ĭ ������ �̵�
	printf("1234567");
	printf("\b");
	printf("\n");

	// debug �� ȭ�� ����
	getchar(); // enter �Է±��� ��ٸ�.
}
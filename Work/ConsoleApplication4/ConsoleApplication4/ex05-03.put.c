#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	// putchar = put + character
	putchar(65); // 65 = 'A';
	putchar('A'); // 'A'

	// #define putchar(c) putc( (c), stdout)
	putc('a', stdout); // stdout: standard output(�����)
	
	printf("\n");

	// puts : ���ڿ��� ����� �� ���.
	puts("Hi, hello!!");


	//debug �� ȭ�� ����
	getchar(); // enter �Է±��� ��ٸ�.

}
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	printf("[%5d] [%05d] [%-5d]\n", 10, 23, 45);
	printf("%8.4f\n", 23.4567);
	//[   10] [00023] [45   ]

	// ���� ����
	char c1;
	int n1;
	float f1;

	// ���� ����(�ִ´�)
	c1  = 'a';
	n1 = 200;
	f1 = 59.56;

	// c1, n1, f1�� printf�� �̿��Ͽ� ����Ͻÿ�.
	printf("\n[%c] [%d] [%f]\n", c1, n1, f1);

	// ���� ���� & �ʱ�ȭ
	char c = 'A';
	int n = 123;
	double d = 3.14;

	// ��� : printf
	printf("[%c] [%d] [%lf]\n", c, n, d);

	// debug�� ���ȭ�� ��ž��Ű�� ����.
	getchar();
}
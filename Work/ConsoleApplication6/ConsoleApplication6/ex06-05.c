#include <stdio.h>
#include <stdlib.h>
#define ip 10

void main(void)
{
	int a = 10;
	int b = 15;

	double result;

	result = a / b;
	printf("%lf \n", result);

	// ����/���� ��� �ȵ�~~ ������ ������ ������ ����.
	result = (double) ( a / b );
	printf("%lf \n", result);
	
	// �Ǽ�/���� ���� �� ����.
	result = ( (double)a ) / b;
	printf("%lf \n", result);



	system("pause");
}
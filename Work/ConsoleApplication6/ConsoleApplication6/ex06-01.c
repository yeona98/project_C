#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int num1 = 10, num2 = 5;

	printf("input : ");
	// ù��° %d ���� num1�� �ּҰ��� �����Ͻÿ�.
	// �ι�° %d ���� num2�� �ּҰ��� �����Ͻÿ�.
	scanf("%d %d", &num1, &num2);

	printf("�Է°� : %d %d \n", num1, num2);

	int a = num1 + num2;
	int m = num1 - num2;
	int c = num1 * num2; // ���ϱ� : 55
	int d = num1 / num2; // ������ : 2
	int r = num1 % num2; // ������ : 1, 11-5*(2(��))=1

	printf("+: %d \n", a);
	printf("-: %d \n", m);
	printf("*: %d \n", c);
	printf("/: %d \n", d);
	printf("%%: %d \n", r);


	system("pause");
}
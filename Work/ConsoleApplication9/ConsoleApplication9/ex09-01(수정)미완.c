#include <stdio.h>
#include <stdlib.h>

int GetSum(int from, int to)
{
	int sum = 0;

	// from ���� to ������ ��
	int i = 0;
	for (i = from; i <= to; i++)
	{
		sum = sum + i;
	}

	return sum;
}

int main(void)
{
	int num = 0, i = 0, sum = 0;

	int result, value;

	scanf("%d", &num);

	sum = GetSum(num);
	printf("�հ� : %d\n", sum);

	result = GetSum(100) / 100;

	sum = GetSum(value);
	printf("%d������ �հ� : %d\n", value, sum);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int GetSum(int num)
{
	int i, sum;
	for (i = 1, sum = 0; i <= num; i++)
		sum += i;
	return sum;
}

int main(void)
{
	int num, i, sum;
	int result, value;
	scanf("%d", &num);
	sum = GetSum(num);
	printf("�հ� : %d\n", sum);

	result = GetSum(100) / 100;

	sum = GetSum(value);
	printf("%d������ �հ� : %d\n", value, sum);
	return 0;
}
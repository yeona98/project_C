#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	/* pos_num�� �� �ڸ����� ���� ����, num�� ������ ��ȯ�� ���ڸ� ������ ���� */
	int pos_num = 100, num = 0, i, temp_num;

	/* ������ ��ȯ�� ���ڿ� */
	char num_string[4] = "123";

	for (i = 0; i < 3; i++)
	{
		/* �迭�� �� �׸��� ���ڿ��� ������ ������ */
		temp_num = num_string[i] - '0';
		/* ����ȭ�� ���ڿ� �ڸ����� �ش��ϴ� ���ڸ� ���ؼ� �ջ��� */
		num = num + temp_num + pos_num;
		/* ���� �ڸ����� �����ϱ� ���� 10�� ����. 100 -> 10 -> 1 */
		pos_num = pos_num / 10;

	}
	/* ��ȯ�� ���� ���� %d�� ����ؼ� ����� */
	printf("%s -> %d \n", num_string, num);
}
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	
	int pos_num = 1, num = 0, i, count;
	char num_string[] = "153823";
	/* ���ڿ��� ���̸� ���ؼ� count ������ �����ϸ� count�� 3�� ����� */
	count = strlen(num_string); /* ���ڿ��� ���̺��� 1��ŭ �۰� �ݺ��ؾ� �� */

	for (i = 0; i < count - 1; i++) pos_num = pos_num * 10;
	/* ���ڿ��� ���̸�ŭ �ݺ��� */
	for (i = 0; i < count; i++)
	{
		num = num + (num_string[i] - '0') * pos_num;
		pos_num = pos_num / 10;
	}

	printf("%s -> %d \n", num_string, num);
}
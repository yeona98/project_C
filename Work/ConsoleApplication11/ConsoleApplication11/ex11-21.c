#include <stdio.h>
#include <stdlib.h>

void main()
{
	// int * const p;
	int data1 = 5, temp1 = 0;
	int * const p1 = &data1;
	*p1 = 3;
	/* p ������ �����ϰ� �ִ� �ּҿ� ���� 3�� �����ϸ� data ������ ���� 3���� ����� */

	/* 
	p1 = &temp1;
	���� �߻� : ���� p�� const �Ӽ��� ����Ǿ� p�� ����� �ּҴ� ������ �� ����
	*/


	// const int *p;
	int data2 = 5;
	const int *p2 = &data2;
	/* ���� p�� data, ������ �ּҸ� ������ */

	/*
	*p2 = 3;
	���� �߻� : ���� p�� ����Ű�� ��� const �Ӽ��� ����Ǿ� ����� ���� ������ �� ����
	*/
	

	// const int * const p;
	int data3 = 5, temp3 = 0;
	const int * const p3 = &data3;
	/*
	*p3 = 3;
	���� �߻� : ���� p�� ����Ű�� ��� const �Ӽ��� ����Ǿ� ����� ���� ������ �� ����
	*/

	/*
	p3 = &temp3;
	���� �߻� : ���� p�� const �Ӽ��� ����Ǿ� p�� ����� �ּҴ� ������ �� ����
	*/


}
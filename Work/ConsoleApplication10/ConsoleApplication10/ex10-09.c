#include <stdio.h>
#include <stdlib.h>

void printarray(int array[], int size)
{
	for (int i = 0; i < size; i = i + 1)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

void sortselect(int array[], int size)
{
	// i : 0 ~ 8
	for (int i = 0; i < size - 1; i = i + 1)
	{
		// j : 1 ~ 9
		for (int j = i + 1; j < size; j = j + 1)
		{
			if (array[i] > array[j])
			{ // swap �ϱ�
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;

			}
		}
	}
}


void main(void)
{
	// �迭 ����
	int scores[10] = { 23, 96, 35, 42, 81, 19, 8, 77, 50, 64 };

	// �迭�� ������
	int size = sizeof(scores) / sizeof(int);

	// �迭 ���
	printf("���� ��: ");
	printarray(scores, size);

	// �����ϱ�
	sortselect(scores, size);

	// �迭 ���
	printf("���� ��: ");
	printarray(scores, size);



	system("pause");
}
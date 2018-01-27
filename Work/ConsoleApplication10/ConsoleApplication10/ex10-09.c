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

/*
	start: ���� ���ȣ
	end  : ���� ���ȣ
*/
int arraysum(int array[], int start, int end)
{
	int sum = 0;
	for (int i = start; i <= end;  i = i + 1)
	{
		sum = sum + array[i];
	}

	return sum;
}

double average(int sum, int count)
{
	double avg = (double)sum / (double)count;
	return avg;
}


void main(void)
{
	// �迭 �ʱ�ȭ
	int scores[] = { 7, 9, 4, 8, 5 };

	// �迭�� ������
	int size = sizeof(scores) / sizeof(int);

	
	// �����ϱ�
	sortselect(scores, size);

	// ��ȿ ���� ���: 1~size-2
	for (int i = 1; i <= size - 2; i = i + 1)
	{
		printf("%d ", scores[i]);
	}
	printf("\n");

	// �հ� ���ϰ� ���: 1~size-2
	int sum = arraysum(scores, 1, size - 2);
	printf("�հ� : %d \n", sum);

	// ��� ���ϰ� ���
	double avg = average(sum, size - 2);
	printf("��� : %.2lf \n", avg);





	system("pause");
}
#include <stdio.h>
#include <stdlib.h>

// �Լ� ����
int totalsum(int array[], int size);

int main(void)
{
	// �迭 ����
	int scores[5];

	
	

	// Ű���� �Է�
	for (int i = 0; i < 5; i++)
	{
		printf("���� %d : ", i + 1);
		scanf("%d", &scores[i]);
	}

	int size = 5;

	// �հ� ���ϱ�
	int sum = totalsum(scores, 5);
	

	// ��� ���ϱ�
	double avg = (double)sum / size;

	printf("�հ� : %d\n", sum);
	printf("��� : %lf\n", avg);

	system("pause");
}

// �Լ� ����
int totalsum(int array[], int size)
{
	int sum = 0;
	for( int i = 0; i < size; i = i + 1)
	{
		sum = sum + array[i];
	}

	return sum;
}

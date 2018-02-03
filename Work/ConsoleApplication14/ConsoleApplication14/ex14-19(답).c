#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	// �۾� ����
	// 1. scanf�� ����Ͽ� �ɻ� ������ �Է� �ޱ�
	// 2. malloc�� �̿��Ͽ� �޸� �Ҵ�. �迭 ������ ���� ��
	// 3. �ݺ����� �̿��Ͽ� ���� �Է� �ޱ�
	// 4. �迭 �����ϱ�
	// 5. ��ȿ ���� ����ϱ� 1������ �ɻ������� - 1 ����
	// 6. �հ� ���ϱ�
	// 7. ��� ���ϱ�

	// 1. scanf�� ����Ͽ� �ɻ� ������ �Է� �ޱ�
	int size = 0;
	printf("�ɻ� ���� �� �Է� : ");
	scanf("%d", &size);

	// 2. malloc�� �̿��Ͽ� �޸� �Ҵ�. �迭 ������ ���� ��
	int * p = (int *)calloc(size, sizeof(int));

	// 3. �ݺ����� �̿��Ͽ� ���� �Է� �ޱ�
	for (int i = 0; i < size; i = i + 1)
	{
		printf("5�� �ɻ� ������ ���� �Է� : ");
		scanf("%d", p + i);
		rewind(stdin);
	}

	// 4. �迭 �����ϱ�. ���� ����(swap)�� �̿��Ͽ� 
	for (int i = 0; i < size - 1; i = i + 1)
	{
		for (int j = i + 1; j < size; j = j + 1)
		{
			if (p[i] > p[j]) // p[i] == *(p+i), p[j] == *(p+j)
			{
				// ���� �ٲٽÿ�.
				int temp = p[j];
				p[j] = p[i];
				p[i] = temp;
			}
		}
	}
	// 5. ��ȿ ���� ����ϱ� 1������ �ɻ������� - 1 ����
	printf("��ȿ ���� ��� : ");
	for (int i = 1; i < size - 1; i = i + 1)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");

	// 6. �հ� ���ϱ�
	int sum = 0;
	for (int i = 1; i < size - 1; i = i + 1)
	{
		sum = sum + p[i]; // p[i] == *(p+i)
	}
	printf("�հ�� %d \n", sum);

	// 7. ��� ���ϱ�
	double avg = (double)sum / (size - 2);
	printf("����� %.2lf \n", avg);

	system("pause");
}
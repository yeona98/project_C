#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int size; // �л���


	// 1. scanf�� ����Ͽ� �л��� �Է� �ޱ�
	printf("�л� �� : ");
	scanf("%d", &size);

	// 2. malloc�� �̿��Ͽ� �޸� �Ҵ�. �迭 ������ ���� ��
	int * p = (int *)malloc(size * sizeof(int));

	// 3. �ݺ����� �̿��Ͽ� ���� ���� �Է� �ޱ�
	for (int i = 0; i < size; i = i + 1)
	{
		printf("�л� %d�� ����: ", i + 1);
		scanf("%d", p + i);

		// �Է� ���� �ʱ�ȭ
		rewind(stdin); // stdin : standard input �� ����.
	}

	// 4. �հ� ���ϱ�
	int sum = 0;
	for (int i = 0; i < size; i = i + 1)
	{
		// ���� �߿��� ����: �����ʹ� �迭�̴�.
		// *(p+i) == p[i]
		sum = sum + p[i]; // sum = sum + *(p+i)
	}
	printf("�հ�� : %d \n", sum);

	// 5. ��� ���ϱ�
	double avg = (double)sum / size;
	printf("�հ�� : %lf \n", avg);

	// 6. �޸� ����. malloc�� �̿��� ���� �޸� �Ҵ��..
	free(p);

	system("pause");
}
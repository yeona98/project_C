#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int size)
{
	for (int i = 0; i < size ; i = i + 1)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}

void main(void)
{
	// �迭 ���� : ���ӵ� �޸� �ڵ� �Ҵ�
	int array1[5];

	// �迭�� ����
	for (int i = 0; i <= 4; i = i + 1) 
	{
		array1[i] = -1;
	}
	// �迭�� �ʱ�ȭ = ���� + ����
	int array2[5] = { 0, 0, 0, 0, 0 };
	int array3[5] = { 0, };   // == { 0, 0, 0, 0, 0};
	int array4[5] = { -1, };  // == { -1, 0, 0, 0, 0};
	int array5[ ] = { 1, 2, 3, 1 }; // == int array5[4] = {1, 2, 3, 1};

	int size = 10;

	// array1�� ����Ͻÿ�.
	printArray(array1, sizeof(array1) / sizeof(int));

	// array2�� ����Ͻÿ�.
	printArray(array2, sizeof(array2) / sizeof(int));

	// array3�� ����Ͻÿ�.
	printArray(array3, sizeof(array3) / sizeof(int));

	// array4�� ����Ͻÿ�.
	printArray(array4, sizeof(array4) / sizeof(int));

	// array5�� ����Ͻÿ�.
	printArray(array5, sizeof(array5) / sizeof(int));

	system("pause");
}


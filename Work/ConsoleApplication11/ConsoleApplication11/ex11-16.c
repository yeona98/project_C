#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int arr[] = { 0, 1, 2, 3, 4 };
	int* p = NULL;
	p = &arr[0];
	p = arr; // arr== &arr[0]

	// sizeof�� �̿��Ͽ� �迭�� ũ�⸦ ���Ͻÿ�.
	int size = sizeof(arr) / sizeof(int);
	
	printf("%d \n", size);


	// ������ �ּ� ������ �̿��Ͽ� �迭�� ���� ����Ͻÿ�.
	// ��� ����: 0, 1, 2, 3, 4
	for (int i = 0; i < size; i = i + 1)
	{
		printf("%d ", *p);
		p = p + 1;
	}





}

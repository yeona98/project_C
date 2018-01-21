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
			{ // swap 하기
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;

			}
		}
	}
}


void main(void)
{
	// 배열 선언
	int scores[10] = { 23, 96, 35, 42, 81, 19, 8, 77, 50, 64 };

	// 배열의 사이즈
	int size = sizeof(scores) / sizeof(int);

	// 배열 출력
	printf("정렬 전: ");
	printarray(scores, size);

	// 정렬하기
	sortselect(scores, size);

	// 배열 출력
	printf("정렬 후: ");
	printarray(scores, size);



	system("pause");
}
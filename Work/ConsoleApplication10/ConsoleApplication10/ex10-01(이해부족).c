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
	// 배열 선언 : 연속된 메모리 자동 할당
	int array1[5];

	// 배열의 대입
	for (int i = 0; i <= 4; i = i + 1) 
	{
		array1[i] = -1;
	}
	// 배열의 초기화 = 선언 + 대입
	int array2[5] = { 0, 0, 0, 0, 0 };
	int array3[5] = { 0, };   // == { 0, 0, 0, 0, 0};
	int array4[5] = { -1, };  // == { -1, 0, 0, 0, 0};
	int array5[ ] = { 1, 2, 3, 1 }; // == int array5[4] = {1, 2, 3, 1};

	int size = 10;

	// array1을 출력하시오.
	printArray(array1, sizeof(array1) / sizeof(int));

	// array2을 출력하시오.
	printArray(array2, sizeof(array2) / sizeof(int));

	// array3을 출력하시오.
	printArray(array3, sizeof(array3) / sizeof(int));

	// array4을 출력하시오.
	printArray(array4, sizeof(array4) / sizeof(int));

	// array5을 출력하시오.
	printArray(array5, sizeof(array5) / sizeof(int));

	system("pause");
}


#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int arr[] = { 0, 1, 2, 3, 4 };
	int* p = NULL;
	p = &arr[0];
	p = arr; // arr== &arr[0]

	// sizeof를 이용하여 배열의 크기를 구하시오.
	int size = sizeof(arr) / sizeof(int);
	
	printf("%d \n", size);


	// 포인터 주소 연산을 이용하여 배열의 값을 출력하시오.
	// 출력 예시: 0, 1, 2, 3, 4
	for (int i = 0; i < size; i = i + 1)
	{
		printf("%d ", *p);
		p = p + 1;
	}





}

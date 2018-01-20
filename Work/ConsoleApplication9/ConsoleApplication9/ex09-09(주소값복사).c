#include <stdio.h>

void swap(int *x, int *y);

// 원본 값 변한다.

void main(void)
{
	int a = 5, b = 3;

	printf("main : a=%d b=%d \n", a, b);
	swap(&a, &b);  
	printf("main : a=%d b=%d \n", a, b);
	

	system("pause");
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	  *x = *y;
	  *y = temp;

	  printf("swap : x=%d y=%d \n", *x, *y);
}
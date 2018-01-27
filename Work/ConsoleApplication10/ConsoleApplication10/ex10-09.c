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

/*
	start: 시작 방번호
	end  : 종료 방번호
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
	// 배열 초기화
	int scores[] = { 7, 9, 4, 8, 5 };

	// 배열의 사이즈
	int size = sizeof(scores) / sizeof(int);

	
	// 정렬하기
	sortselect(scores, size);

	// 유효 점수 출력: 1~size-2
	for (int i = 1; i <= size - 2; i = i + 1)
	{
		printf("%d ", scores[i]);
	}
	printf("\n");

	// 합계 구하고 출력: 1~size-2
	int sum = arraysum(scores, 1, size - 2);
	printf("합계 : %d \n", sum);

	// 평균 구하고 출력
	double avg = average(sum, size - 2);
	printf("평균 : %.2lf \n", avg);





	system("pause");
}
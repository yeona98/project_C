#include <stdio.h>
#include <stdlib.h>

// 함수 선언
int totalsum(int array[], int size);

int main(void)
{
	// 배열 선언
	int scores[5];

	
	

	// 키보드 입력
	for (int i = 0; i < 5; i++)
	{
		printf("성적 %d : ", i + 1);
		scanf("%d", &scores[i]);
	}

	int size = 5;

	// 합계 구하기
	int sum = totalsum(scores, 5);
	

	// 평균 구하기
	double avg = (double)sum / size;

	printf("합계 : %d\n", sum);
	printf("평균 : %lf\n", avg);

	system("pause");
}

// 함수 정의
int totalsum(int array[], int size)
{
	int sum = 0;
	for( int i = 0; i < size; i = i + 1)
	{
		sum = sum + array[i];
	}

	return sum;
}

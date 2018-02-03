#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	// 작업 순서
	// 1. scanf를 사용하여 심사 위원수 입력 받기
	// 2. malloc를 이용하여 메모리 할당. 배열 생성과 같은 것
	// 3. 반복문을 이용하여 점수 입력 받기
	// 4. 배열 정렬하기
	// 5. 유효 점수 출력하기 1번부터 심사위원수 - 1 까지
	// 6. 합계 구하기
	// 7. 평균 구하기

	// 1. scanf를 사용하여 심사 위원수 입력 받기
	int size = 0;
	printf("심사 위원 수 입력 : ");
	scanf("%d", &size);

	// 2. malloc를 이용하여 메모리 할당. 배열 생성과 같은 것
	int * p = (int *)calloc(size, sizeof(int));

	// 3. 반복문을 이용하여 점수 입력 받기
	for (int i = 0; i < size; i = i + 1)
	{
		printf("5명 심사 위원의 점수 입력 : ");
		scanf("%d", p + i);
		rewind(stdin);
	}

	// 4. 배열 정렬하기. 선택 정렬(swap)을 이용하여 
	for (int i = 0; i < size - 1; i = i + 1)
	{
		for (int j = i + 1; j < size; j = j + 1)
		{
			if (p[i] > p[j]) // p[i] == *(p+i), p[j] == *(p+j)
			{
				// 값을 바꾸시오.
				int temp = p[j];
				p[j] = p[i];
				p[i] = temp;
			}
		}
	}
	// 5. 유효 점수 출력하기 1번부터 심사위원수 - 1 까지
	printf("유효 점수 출력 : ");
	for (int i = 1; i < size - 1; i = i + 1)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");

	// 6. 합계 구하기
	int sum = 0;
	for (int i = 1; i < size - 1; i = i + 1)
	{
		sum = sum + p[i]; // p[i] == *(p+i)
	}
	printf("합계는 %d \n", sum);

	// 7. 평균 구하기
	double avg = (double)sum / (size - 2);
	printf("평균은 %.2lf \n", avg);

	system("pause");
}
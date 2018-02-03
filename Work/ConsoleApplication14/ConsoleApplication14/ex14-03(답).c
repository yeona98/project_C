#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int size; // 학생수


	// 1. scanf를 사용하여 학생수 입력 받기
	printf("학생 수 : ");
	scanf("%d", &size);

	// 2. malloc를 이용하여 메모리 할당. 배열 생성과 같은 것
	int * p = (int *)malloc(size * sizeof(int));

	// 3. 반복문을 이용하여 수학 성적 입력 받기
	for (int i = 0; i < size; i = i + 1)
	{
		printf("학생 %d의 성적: ", i + 1);
		scanf("%d", p + i);

		// 입력 버퍼 초기화
		rewind(stdin); // stdin : standard input 의 약자.
	}

	// 4. 합계 구하기
	int sum = 0;
	for (int i = 0; i < size; i = i + 1)
	{
		// 가장 중요한 내용: 포인터는 배열이다.
		// *(p+i) == p[i]
		sum = sum + p[i]; // sum = sum + *(p+i)
	}
	printf("합계는 : %d \n", sum);

	// 5. 평균 구하기
	double avg = (double)sum / size;
	printf("합계는 : %lf \n", avg);

	// 6. 메모리 해제. malloc을 이용해 동적 메모리 할당시..
	free(p);

	system("pause");
}
#include <stdio.h>
#include <stdlib.h>

int getSum(int score[])
{

}

int getAvg(int score[])
{

}


int main(void)
{
	int score[5];
	int sum = 0;
	double avg = 0.0;

	for (int i = 1; i <= 5; i++)
	{
		printf("성적 %d : ", i);
		scanf("%d", score[i - 1]);
	}

	printf("합계: %d", getSum(score[5]));
	printf("평균: %d", getAvg(score[5]));
}
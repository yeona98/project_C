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
		printf("���� %d : ", i);
		scanf("%d", score[i - 1]);
	}

	printf("�հ�: %d", getSum(score[5]));
	printf("���: %d", getAvg(score[5]));
}
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int score = 0;

	printf("Please enter your score : ");
	scanf("%d", &score);
	
	if (score >= 60)
	{
		printf("합격\n");
		printf("축하해");
	}
	else
	{
		printf("불합격\n");
	}
	
	system("pause");
}
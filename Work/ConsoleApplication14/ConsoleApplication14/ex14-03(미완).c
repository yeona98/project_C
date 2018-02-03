#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int scores[3];
	int number = 0;
	
	printf("학생수 : ");
	scanf("%d", &number);
	
	for (int i = 0; i < number; i = i + 1)
	{
		printf("학생 %d의 성적: ", i + 1);
		scanf("&d", scores[i]);
		rewind(stdin);
		
	}

	int sum = 0;
	for (int i = 0; i < number; i = i + 1)
	{
		sum = sum + scores[i];
	}
	printf("수학 점수 합계는 : %d", sum);
	printf("수학 점수 평균은 : %d", sum / number);
	

	system("pause");
}
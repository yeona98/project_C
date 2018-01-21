#include <stdio.h>
#include <stdlib.h>



void main(void)
{
	// 배열 선언
	int scores[10] = { 23, 96, 35, 42, 81, 19, 8, 77, 50, 64 };

	int min = scores[0];
	int max = scores[0];

	for (int i = 0; i < 10; i = i + 1)
	{
		if (min > scores[i])
			min = scores[i];
		if (max < scores[i])
			max = scores[i];
	}

	printf("최소값 : %d \n", min);
	printf("최대값 : %d \n", max);

	system("pause");
}

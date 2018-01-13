#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int score = -1;

	printf("Score : ");
	scanf("%d", &score);

	// switch 문 적용을 위한 연산.
	int grade = score / 10;

	switch (grade)
	{
	case 10:
		printf("A");
		break;
	case  9:
		printf("B");
		break;
	case  8:
		printf("C");
		break;
	case  7:
		printf("D");
		break;
	case  6:
		printf("E");
		break;
	default:
		printf("F");
		break;

	}
}
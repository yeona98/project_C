#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int year = 0;
	int month = 0;
	int day = 0;

	printf("input year : ");
	scanf("%d", &year);

	printf("input month : ");
	scanf("%d", &month);

	printf("input day : ");
	scanf("%d", &day);

	printf("Your birthday is %04d.%02d.%02d", year, month, day); // 최소자리수 앞에 0을 쓰면 빈자리는 0으로 채워짐

	system("pause");
}
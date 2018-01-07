#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int year = 0;
	int month = 0;
	int date = 0;


	printf("input year : ");
	scanf("%d", &year); // ÀØÁö¸»ÀÚ. &
	printf("input month : ");
	scanf("%d", &month);
	printf("input date : ");
	scanf("%d", &date);

	printf("Your birthday is %d. %d. %d.", year, month, date);
	printf("\n");

}
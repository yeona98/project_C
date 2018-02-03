#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	typedef struct
	{
		int year;
		int month;
		int day;
	} DATE;

	typedef struct
	{
		DATE birth;
		DATE enterDate;
		DATE leaveDate;
	} PATIENT;

	PATIENT Kim = {1,2,3,4,5,6,7,8,9};

	printf("b:%d.%d.%d, e:%d.%d.%d, l:%d,%d,%d \n", Kim.y,);

	PATIENT *ptr;
	ptr = &Kim;


}
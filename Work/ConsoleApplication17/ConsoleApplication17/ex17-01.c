#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	struct student
	{
		int id;
		char name[26];
		float grade;
	};
	struct student Park;
	struct student Kim;
	
	typedef struct
	{
		int id;
		char name[26];
		float grade;
	} student2;
	student2 Park2;
	student2 Kim2;

	

	struct date_of_birth
	{
		int year;
		int month;
		int day;
	};

	// date_of_birth Ÿ���� ���� birthday�� ����ÿ�.
	// ���� ��¥�� birthday�� �ʱ�ȭ�Ͻÿ�.
	struct date_of_birth birthday = { 2018, 2, 3 }; // �ʱ�ȭ
	printf("%4d - %2d - %2d\n", birthday.year, birthday.month, birthday.day);

	 // birthday�� year  ��� ���� 1980 ���� �ٲٽÿ�.
	 // birthday�� month ��� ���� 10   ���� �ٲٽÿ�.
	 // birthday�� day   ��� ���� 16   ���� �ٲٽÿ�.
	birthday.year  = 1980;
	birthday.month =   10;
	birthday.day   =   16;
	printf("%4d - %2d - %2d\n", birthday.year, birthday.month, birthday.day);

	struct date_of_birth Kim3  = { 1998, 1, 1 };
	struct date_of_birth Park3 = { 1956, 3, 7 };

	printf("������:\n");
	printf("%4d - %2d - %2d\n", Kim3.year, Kim3.month, Kim3.day);    // 1998- 1- 1
	printf("%4d - %2d - %2d\n", Park3.year, Park3.month, Park3.day); // 1956- 3- 7

	Park3 = Kim3;

	printf("������:\n");
	printf("%4d - %2d - %2d\n", Kim3.year, Kim3.month, Kim3.day);    // 1998- 1- 1
	printf("%4d - %2d - %2d\n", Park3.year, Park3.month, Park3.day); // 1998- 1- 1


	typedef struct
	{
		int x;
		int y;
		float t;
		char u;
	} SAMPLE;
	SAMPLE sam1 = { 2, 5, 3.2, 'A' };
	SAMPLE sam2 = { 7, 3 };

	SAMPLE *ptr;
	ptr = &sam1;

	printf("dot �����ڴ� ������ ���� ��� ���� \n");
	printf("sam1 ::: x=%3d, y=%3d, t=%5.2f, u=%c \n", sam1.x, sam1.y, sam1.t, sam1.u);
	printf("ptr  ::: x=%3d, y=%3d, t=%5.2f, u=%c \n", (*ptr).x, (*ptr).y, (*ptr).t, (*ptr).u);

	printf("%d \n", sizeof(SAMPLE));

	printf("selection �����ڴ� �����͸� ���� ��� ���� \n");
	printf("ptr->  ::: x=%3d, y=%3d, t=%5.2f, u=%c \n", ptr->x, ptr->y, ptr->t, ptr->u);

	system("pause");
}
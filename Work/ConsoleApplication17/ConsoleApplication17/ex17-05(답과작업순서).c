#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	// �۾� ����
	
	// 1. ����ü ����
	// 2. ����ü ���� & �ʱ�ȭ
	// 3. dot �����ڸ� �̿��� Kim �� ���
	// 4. ����ü ������ ����
	// 5. ����ü �����Ϳ� Kim ����
	// 6. ->�� �̿��� Kim �� ���


	// 1. ����ü ����

	typedef struct
	{
		int year;
		int month;
		int day;
	} DATE;

	typedef struct
	{
		DATE birthDate;
		DATE enterDate;
		DATE leaveDate;
	} PATIENT;

	// 2. ����ü ���� & �ʱ�ȭ

	PATIENT kim = { { 1989, 1, 1 }, { 2015, 10, 20 }, { 2017, 10, 29 } };

	// 3. dot �����ڸ� �̿��� Kim �� ���
	printf("kim's birthday : %4d-%2d-%2d \n", kim.birthDate.year, kim.birthDate.month, kim.birthDate.day);
	printf("kim's birthday : %4d-%2d-%2d \n", kim.enterDate.year, kim.enterDate.month, kim.enterDate.day);
	printf("kim's birthday : %4d-%2d-%2d \n", kim.leaveDate.year, kim.leaveDate.month, kim.leaveDate.day);

	// 4. ����ü ������ ���� ����
	PATIENT *ptr = NULL;

	// 5. ����ü �����Ϳ� Kim ����
	ptr = &kim;

	// 6. ->�� �̿��� Kim �� ���
	printf("kim's birthday : %4d-%2d-%2d \n", ptr->birthDate.year, ptr->birthDate.month, ptr->birthDate.day);
	printf("kim's birthday : %4d-%2d-%2d \n", ptr->enterDate.year, ptr->enterDate.month, ptr->enterDate.day);
	printf("kim's birthday : %4d-%2d-%2d \n", ptr->leaveDate.year, ptr->leaveDate.month, ptr->leaveDate.day);

	// 7.
	printf("kim's birthday : %4d-%2d-%2d \n", ptr->birthDate);
	printf("kim's birthday : %4d-%2d-%2d \n", ptr->enterDate);
	printf("kim's birthday : %4d-%2d-%2d \n", ptr->leaveDate);

	system("pause");
}
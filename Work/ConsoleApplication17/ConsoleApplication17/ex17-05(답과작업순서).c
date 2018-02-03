#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	// 작업 순서
	
	// 1. 구조체 정의
	// 2. 구조체 선언 & 초기화
	// 3. dot 연산자를 이용한 Kim 값 출력
	// 4. 구조체 포인터 선언
	// 5. 구조체 포인터에 Kim 대입
	// 6. ->를 이용한 Kim 값 출력


	// 1. 구조체 정의

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

	// 2. 구조체 선언 & 초기화

	PATIENT kim = { { 1989, 1, 1 }, { 2015, 10, 20 }, { 2017, 10, 29 } };

	// 3. dot 연산자를 이용한 Kim 값 출력
	printf("kim's birthday : %4d-%2d-%2d \n", kim.birthDate.year, kim.birthDate.month, kim.birthDate.day);
	printf("kim's birthday : %4d-%2d-%2d \n", kim.enterDate.year, kim.enterDate.month, kim.enterDate.day);
	printf("kim's birthday : %4d-%2d-%2d \n", kim.leaveDate.year, kim.leaveDate.month, kim.leaveDate.day);

	// 4. 구조체 포인터 변수 선언
	PATIENT *ptr = NULL;

	// 5. 구조체 포인터에 Kim 대입
	ptr = &kim;

	// 6. ->를 이용한 Kim 값 출력
	printf("kim's birthday : %4d-%2d-%2d \n", ptr->birthDate.year, ptr->birthDate.month, ptr->birthDate.day);
	printf("kim's birthday : %4d-%2d-%2d \n", ptr->enterDate.year, ptr->enterDate.month, ptr->enterDate.day);
	printf("kim's birthday : %4d-%2d-%2d \n", ptr->leaveDate.year, ptr->leaveDate.month, ptr->leaveDate.day);

	// 7.
	printf("kim's birthday : %4d-%2d-%2d \n", ptr->birthDate);
	printf("kim's birthday : %4d-%2d-%2d \n", ptr->enterDate);
	printf("kim's birthday : %4d-%2d-%2d \n", ptr->leaveDate);

	system("pause");
}
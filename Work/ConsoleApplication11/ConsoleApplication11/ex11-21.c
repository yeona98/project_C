#include <stdio.h>
#include <stdlib.h>

void main()
{
	// int * const p;
	int data1 = 5, temp1 = 0;
	int * const p1 = &data1;
	*p1 = 3;
	/* p 변수가 저장하고 있는 주소에 가서 3을 대입하면 data 변수의 값이 3으로 변경됨 */

	/* 
	p1 = &temp1;
	오류 발생 : 변수 p에 const 속성이 적용되어 p에 저장된 주소는 변경할 수 없음
	*/


	// const int *p;
	int data2 = 5;
	const int *p2 = &data2;
	/* 변수 p는 data, 변수의 주소를 저장함 */

	/*
	*p2 = 3;
	오류 발생 : 변수 p가 가리키는 대상에 const 속성이 적용되어 대상의 값을 변경할 수 없음
	*/
	

	// const int * const p;
	int data3 = 5, temp3 = 0;
	const int * const p3 = &data3;
	/*
	*p3 = 3;
	오류 발생 : 변수 p가 가리키는 대상에 const 속성이 적용되어 대상의 값을 변경할 수 있음
	*/

	/*
	p3 = &temp3;
	오류 발생 : 변수 p에 const 속성이 적용되어 p에 저장된 주소는 변경할 수 없음
	*/


}
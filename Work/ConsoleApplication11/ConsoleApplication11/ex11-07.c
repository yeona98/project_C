#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 포인터 선언과 초기화
	char   * pc = NULL;
	int    * pi = NULL;
	double * pd = NULL;

	printf("pc의 크기 : %d \n", sizeof(pc));
	printf("pi의 크기 : %d \n", sizeof(pi));
	printf("pd의 크기 : %d \n", sizeof(pd));

	printf("char*   의 크기 : %d \n", sizeof(char*  ));
	printf("short*  의 크기 : %d \n", sizeof(short* ));
	printf("int*    의 크기 : %d \n", sizeof(int*   ));
	printf("float*  의 크기 : %d \n", sizeof(float* ));
	printf("double* 의 크기 : %d \n", sizeof(double*));

	printf("char    의 크기 : %d \n", sizeof(char));
	printf("short   의 크기 : %d \n", sizeof(short));
	printf("int     의 크기 : %d \n", sizeof(int));
	printf("float   의 크기 : %d \n", sizeof(float));
	printf("double  의 크기 : %d \n", sizeof(double));





	

	return EXIT_SUCCESS;
}
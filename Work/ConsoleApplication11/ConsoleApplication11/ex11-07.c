#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ������ ����� �ʱ�ȭ
	char   * pc = NULL;
	int    * pi = NULL;
	double * pd = NULL;

	printf("pc�� ũ�� : %d \n", sizeof(pc));
	printf("pi�� ũ�� : %d \n", sizeof(pi));
	printf("pd�� ũ�� : %d \n", sizeof(pd));

	printf("char*   �� ũ�� : %d \n", sizeof(char*  ));
	printf("short*  �� ũ�� : %d \n", sizeof(short* ));
	printf("int*    �� ũ�� : %d \n", sizeof(int*   ));
	printf("float*  �� ũ�� : %d \n", sizeof(float* ));
	printf("double* �� ũ�� : %d \n", sizeof(double*));

	printf("char    �� ũ�� : %d \n", sizeof(char));
	printf("short   �� ũ�� : %d \n", sizeof(short));
	printf("int     �� ũ�� : %d \n", sizeof(int));
	printf("float   �� ũ�� : %d \n", sizeof(float));
	printf("double  �� ũ�� : %d \n", sizeof(double));





	

	return EXIT_SUCCESS;
}
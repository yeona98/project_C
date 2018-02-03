#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	// 작업 순서
	
	// 1. Opening a File
	// 2. Using the Stream Name
	// 3. Closing the Stream

	// 1. Opening a File
	FILE * fp = NULL;
	fp = fopen("MYDATA.DAT", "w");

	// 2. Using the Stream Name


	// 3. Closing the Stream
	int res = fclose(fp);
	if (res != NULL)
	{
		printf("파일 닫기 오류");
		return EXIT_FAILURE;
	}

	system("pause");

	return EXIT_SUCCESS;
}
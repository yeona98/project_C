#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// �迭�� ����� �ʱ�ȭ
	char str[10] = { '\0' };

	// �������� ����� �ʱ�ȭ
	char * ptr = NULL;

	for (; str[0] == '\0'; )
	{
		printf("Enter a string: ");
		scanf("%9[0123456789.,-$]s", str);

		// �Է� ���� �ʱ�ȭ
		fflush(stdin);
		rewind(stdin);
		flushall();
	}

	

	ptr = str;

	

	for (; *ptr != '\0'; ptr++)
	{
		printf("%c", *ptr);
	}

	printf("\n");



	return EXIT_SUCCESS;
}
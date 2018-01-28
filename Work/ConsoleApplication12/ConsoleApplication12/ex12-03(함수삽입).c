#include <stdio.h>
#include <stdlib.h>

void scanstring(char str[])
{
	// �Ű������� �迭�� ����ϴ� ���
	for (; str[0] == '\0'; )
	{
		printf("Enter a string: ");
		scanf("%9[0123456789.,-$]s", str);

		// �Է� ���� �ʱ�ȭ
		fflush(stdin);
		rewind(stdin);
		flushall();
	}
}

int printstring(char *ptr)
{
	// �Ű������� �����͸� ����ϴ� ���
	for (; *ptr != '\0'; ptr++)
	{
		printf("%c", *ptr);
	}

	printf("\n");

	return *ptr;
}


int main(void)
{
	// �迭�� ����� �ʱ�ȭ
	char str[10] = { '\0' };

	// �������� ����� �ʱ�ȭ
	char * ptr = NULL;

	// �迭�� �ּҰ� �Է�
	scanstring(str);

	ptr = str;
	
	// �������� �ּҰ� �Է�
	printstring(ptr);
	
	system("pause");

	return EXIT_SUCCESS;
}
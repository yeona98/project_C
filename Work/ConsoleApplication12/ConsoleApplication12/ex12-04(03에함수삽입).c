#include <stdio.h>
#include <stdlib.h>

void input(char s[])
{
	// �Ű������� �迭�� ����ϴ� ���
	for (; s[0] == '\0'; )
	{
		printf("Enter a string: ");
		scanf("%9[0123456789.,-$]s", s);

		// �Է� ���� �ʱ�ȭ
		fflush(stdin);
		rewind(stdin);
		flushall();
	}
}

// char * p = ptr;
int output(char *p)
{
	// �Ű������� �����͸� ����ϴ� ���
	for (; *p != '\0'; )
	{
		printf("%c", *p);
		p++;
	}

	printf("\n");

	return *p;
}


int main(void)
{
	// �迭�� ����� �ʱ�ȭ
	char str[10] = { '\0' };

	// �������� ����� �ʱ�ȭ
	char * ptr = NULL;

	// �迭�� �ּҰ� �Է�
	// &str[0] == &str == str
	input(str);

	ptr = str;

	// �������� �ּҰ� �Է�
	output(ptr);

	system("pause");

	return EXIT_SUCCESS;
}
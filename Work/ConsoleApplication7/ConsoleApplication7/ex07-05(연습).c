#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int num1 = 0;
	int num2 = 0;
	
	printf("�� ���� �Է��ϼ���. ");
	scanf("%d", &num1);
	scanf("%d", &num2);

	if (num1 > num2)
	{
		printf("%d", num1);
	}
	else if (num1 < num2)
	{
		printf("%d", num2);
	}
	else if (num1 = num2)
	{
		printf("%d", num1 = num2);
	}


	system("pause");
}
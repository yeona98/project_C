#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int    age    = 0;
	double weight = 0.0;

	printf("������ �Ǽ��� �Է��Ͻÿ� \n");
	scanf("%d %lf", &age, &weight);

	printf("�Է� ���� : %d %lf", age, weight);
	

	system("pause");

	return 0;
}
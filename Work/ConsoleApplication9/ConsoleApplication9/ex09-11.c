#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* c���� ��¥�� �ð��� ���õ� ��� */
/* c���� ����(������ ��) ������ */

void main(void)
{
	int rand1 = 0, rand2 = 0, rand3 = 0;

	printf("rand()�� �̿��� ������ �� ���� \n");

	srand(time(NULL));
	// ������ �� ����
	rand1 = rand();
	printf("%d \n", rand1);

	// min(0)���� max(50)������ ������ ���� ����
	rand2 = rand() % (50 + 1) + 0;
	printf("%d \n", rand2);

	// min���� max ������ ������ ���� ����
	int min = 10;
	int max = 80;
	rand3 = (rand() % ((max + 1) - min)) + min;
	printf("%d \n", rand3);

	system("pause");
}
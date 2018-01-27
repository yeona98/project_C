#include <stdio.h>
#include <stdlib.h>

#define ROWS 4
#define COLS 3

void arrayinput(int array[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i = i + 1)
	{
		for (int j = 0; j < COLS; j = j + 1)
		{
			a[i][j] = i * j;
		}
	}
}

void arrayprint(int array[ROWS][COLS])
{
	for (int r = 0; r < ROWS; r = r + 1)
	{
		for (int c = 0; c < COLS; c = c + 1)
		{
			printf("a[%d][%d]=%d, ", r, c, a[r][c]);
		}
		printf("\n");
	}
}




int main(void)
{
	// 2���� �迭�� ����� �ʱ�ȭ
	int a[ROWS][COLS] = { 0 };

	// 2���� �迭�� ����
	arrayinput(a);

	// �迭�� ���
	arrayprint(a);
	
	return EXIT_SUCCESS;
}
#include <stdio.h>
#include <stdlib.h>


void main(void)
{
	int a;
	printf("input a number : ");
	scanf("%d", &a);

	int r = factorial(a);
	printf("%d! = %d", a, r);

	system("pause");
}

//5*4*3*2*1;
int factorial(int n)
{
	
	// �Լ� Ż�� ����
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);

	
}

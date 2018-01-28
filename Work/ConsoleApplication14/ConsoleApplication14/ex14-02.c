#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *ip;
	int i, sum = 0;

	ip = (int *)malloc(5 * sizeof(int));
	if (ip == 0)
	{
		printf("short memory \n");
		return 1;
	}
	printf("Input the age of 5 people : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", ip + i);
		sum += ip[i];
	}
	printf("Average : %.11f \n", sum/5.0);
	free(ip);
	return 0;
}
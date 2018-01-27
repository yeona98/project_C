#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[5] = { 0 };

	int diff = &arr[3] - &arr[0];
	printf("diff = %d \n", diff);

	for (int i = 0; i < 5; i++)
	{
		printf("&arr[%d] - &arr[0] = %d \n", i, &arr[i] - &arr[0]);
	}
	return EXIT_SUCCESS;
 }
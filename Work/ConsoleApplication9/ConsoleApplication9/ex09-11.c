#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* c에서 날짜와 시간에 관련된 헤더 */
/* c에서 난수(임의의 수) 생성법 */

void main(void)
{
	int rand1 = 0, rand2 = 0, rand3 = 0;

	printf("rand()를 이용한 임의의 수 생성 \n");

	srand(time(NULL));
	// 임의의 수 생성
	rand1 = rand();
	printf("%d \n", rand1);

	// min(0)부터 max(50)까지의 임의의 숫자 생성
	rand2 = rand() % (50 + 1) + 0;
	printf("%d \n", rand2);

	// min부터 max 사이의 임의의 숫자 생성
	int min = 10;
	int max = 80;
	rand3 = (rand() % ((max + 1) - min)) + min;
	printf("%d \n", rand3);

	system("pause");
}
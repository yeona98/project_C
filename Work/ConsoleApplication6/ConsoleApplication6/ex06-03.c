#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> /* C99���� �߰��� */

void main(void)
{
	bool a = true;  /* C99���� �߰��� bool Ÿ�� */
	bool b = true;	/* C99���� �߰��� bool Ÿ�� */
	bool c = false;	/* C99���� �߰��� bool Ÿ�� */

	printf("    %2d AND     %2d : %2d\n", a, b, a && b);
	printf("    %2d AND     %2d : %2d\n", a, c, a && c);
	printf("    %2d AND     %2d : %2d\n", c, a, c && a);
	printf("    %2d OR      %2d : %2d\n", a, b, a || b);
	printf("    %2d OR      %2d : %2d\n", a, c, a || c);
	printf("    %2d OR      %2d : %2d\n", c, a, c || a);
	printf("NOT %2d AND NOT %2d : %2d\n", a, c, !a && !c);
	printf("NOT %2d AND     %2d : %2d\n", a, c, !a && c);
	printf("    %2d AND NOT %2d : %2d\n", a, c, a && !c);

	system("pause");
}
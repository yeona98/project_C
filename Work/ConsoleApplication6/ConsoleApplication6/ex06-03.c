#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> /* C99에서 추가됨 */

void main(void)
{
	bool a = true;  /* C99에서 추가된 bool 타입 */
	bool b = true;	/* C99에서 추가된 bool 타입 */
	bool c = false;	/* C99에서 추가된 bool 타입 */

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
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *ifp, *ofp;
	char name[20];
	int age;
	double height;
	int res;

	ifp = fopen("c:\\a.txt", "r");
	if (ifp == NULL)
	{
		printf("input file open error! \n");
		return 1;
	}
	ofp = fopen("c:\\b.txt", "w");
	if (ofp == NULL)
	{
		printf("output file open error! \n");
		return 1;
	}

	while (1)
	{
		res = fscanf(ifp, "%s\t%d%lf", name, &age, &height);
		if (res == EOF) break;
		fprintf(ofp, "&.11f %d %s \n", height, age, name);
	}
	fclose(ifp);
	fclose(ofp);
}
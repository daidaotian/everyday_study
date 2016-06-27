#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int upp_n = 0;
	int low_n = 0;
	char ch;
	while ((ch = getchar()) != EOF)
	{
		if (isupper(ch))
			upp_n++;
		if (islower(ch))
			low_n++;
	}
	printf("upp_n:%d\tlow_n:%d", upp_n, low_n);
	printf("\n");
	system("pause");
	return 0;
}
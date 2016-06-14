#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char tmp, start = 'F', end = 'A';
	for (int i = 0; i < 6; i++)
	{
		for (tmp = start; tmp >= start - i; tmp--)
			printf("%c", tmp);
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}
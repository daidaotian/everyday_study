#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[8];
	int i = 0;
	printf("input 8 numbers\n");
	for (i = 0; i < 8; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 8; i++)
		printf("%d", a[7 - i]);
	printf("\n");
	system("pause");
	return 0;
}
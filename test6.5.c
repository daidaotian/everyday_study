#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;
	printf("input upline and deline\n");
	scanf("%d%d", &b, &a);
	printf("%5s %10s %15s\n", "num", "square", "cube");
	for (int i = a; i <= b; i++)
		printf("%5d %10d %15d\n", i, i*i, i*i*i);
	printf("\n");
	system("pause");
	return 0;
}
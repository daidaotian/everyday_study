#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void a(int n);
void b(void);
int main()
{
	a(3);
	b();
	system("pause");
	return 0;
}
void a(int n)
{
	for (int i = 0; i < n; i++)
		printf("For he is a jolly good fellow\n");
}
void b(void)
{
	printf("which nobody can deny!\n");
}
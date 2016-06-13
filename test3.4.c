#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void a(int n);
void b(void);
int main()
{
	float a;
	printf("please input your a\n");
	scanf("%f", &a);
	printf("%f         %e\n", a,a);
	system("pause");
	return 0;
}
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void a(int n);
void b(void);
int main()
{
	float a;
	printf("请输入水的夸脱数：\n");
	scanf("%f", &a);
	float b = (a * 950) / (3.0e-23);
	printf("%f 夸脱水含有：%e 个水分子\n", a, b);
	system("pause");
	return 0;
}
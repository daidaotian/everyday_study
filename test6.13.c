#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 8
int main()
{
	double a[size], b[size] = { 0 };
	printf("input 8 double numbers!\n");
	for (int i = 0; i < 8; i++)
		scanf("%lf", a + i);
	for (int i = 0; i < 8; i++)
	for (int j = 0; j <= i; j++)
		b[i] += a[j];
	//根据数值不同自动选择%f或者%e。%e格式在指数小于-4或者大于等于精度时使用
	for (int i = 0; i < 8; i++)
		printf("%8g", a[i]);
	printf("\n");
	for (int i = 0; i < 8; i++)
		printf("%8g", b[i]);

	printf("\n");
	system("pause");
	return 0;
}
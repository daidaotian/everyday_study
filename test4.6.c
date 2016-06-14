#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<float.h>
int main()
{
	double a = 1.0 / 3.0;
	float b = 1.0 / 3.0;
	printf("double a :%.4lf   %.12lf    %.16lf   \n", a, a, a);//读取一个double类型的数值用%lf
	printf("float b:%.4f    %.12f    %.16f   \n", b, b, b);
	printf("%d\n%d", FLT_DIG, DBL_DIG);
	system("pause");
	return 0;
}
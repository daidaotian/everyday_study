#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void a(int n);
void b(void);
int main()
{
	float a;
	printf("������ˮ�Ŀ�������\n");
	scanf("%f", &a);
	float b = (a * 950) / (3.0e-23);
	printf("%f ����ˮ���У�%e ��ˮ����\n", a, b);
	system("pause");
	return 0;
}
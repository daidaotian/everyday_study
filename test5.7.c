#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int lifang(int n);
int main()
{
	int n,n3;
	printf("please input your n!\n");
	scanf("%d", &n);//scanf������ʹ��ָ�룬����������ʱ��һ��������&
	n3=lifang(n);
	printf("lifang:%d\n",n3);
	system("pause");
	return 0;
}
int lifang(int n)
{
	return n*n*n;
}
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, sum = 0;//����sumҪ��ʼ�����ܽ��������+����
	printf("please input your n!\n");
	scanf("%d", &n);//scanf������ʹ��ָ�룬����������ʱ��һ��������&
	while (n > 0)
	{
		sum += n;
		n--;
	}
	printf("sum:%d\n", sum);
	system("pause");
	return 0;
}
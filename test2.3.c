#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int age;
	char name[20];
	printf("input your age and your name please!\n");
	scanf("%d%s", &age, name);//�������治Ҫ��/nʲô�ġ�����
	printf("hello %s,your age is %d and you have lived for %d days\n", name, age, (age * 365));
	system("pause");
	return 0;
}
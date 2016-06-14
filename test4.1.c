#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char fname[20], lname[20];
	printf("input your first name and your last name please!\n");
	scanf("%s%s", fname, lname);
	printf("%s,%s", fname, lname);
	system("pause");
	return 0;
}
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char a[26];
	for (int i = 0; i < 26; i++)//字符一定是带单引号：‘a’
		a[i] = 'a' + i;
	for (int i = 0; i < 26; i++)
		printf("%c   ", a[i]);
	printf("\n");
	system("pause");
	return 0;
}
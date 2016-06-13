#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void a(int n);
void b(void);
int main()
{
	int asc;
	printf("please input your asc\n");
	scanf("%d", &asc);
	printf("相应的字符是：%c\n", asc);
	system("pause");
	return 0;
}
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define	MINS_PERHOUR 60
int main()
{
	int mins;
	printf("please input your minutes!\n");
	scanf("%d", &mins);//scanf������ʹ��ָ�룬����������ʱ��һ��������&
	while (mins > 0)
	{
		printf("that is %d hours and %d mins\n", mins / MINS_PERHOUR, mins%MINS_PERHOUR);
		printf("please input your minutes!\n");
		scanf("%d", &mins);
	}
	system("pause");
	return 0;
}
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define	MINS_PERHOUR 60
int main()
{
	int mins;
	printf("please input your minutes!\n");
	scanf("%d", &mins);//scanf读入是使用指针，非数字名的时候一定别忘了&
	while (mins > 0)
	{
		printf("that is %d hours and %d mins\n", mins / MINS_PERHOUR, mins%MINS_PERHOUR);
		printf("please input your minutes!\n");
		scanf("%d", &mins);
	}
	system("pause");
	return 0;
}
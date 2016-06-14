#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, sum = 0;//这里sum要初始化才能进行下面的+操作
	printf("please input your n!\n");
	scanf("%d", &n);//scanf读入是使用指针，非数字名的时候一定别忘了&
	while (n > 0)
	{
		sum += n;
		n--;
	}
	printf("sum:%d\n", sum);
	system("pause");
	return 0;
}
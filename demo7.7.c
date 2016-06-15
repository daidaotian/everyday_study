#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int main()
{
	char ch;
	int num = 0;//字母个数
	int num1 = 0;//单词个数
	int num2 = 0;//行数
	int inword = false;
	char preword;
	char stop = '|';
	while ((ch = getchar()) != stop)//ch = getchar()外面一定要加括号，不然会误判，ch得不到想要的值
	{
		num++;
		if (ch == '\n')
			num2++;
		if (!isspace(ch) && (!inword))
		{
			num1++;
			inword = true;
		}
		if (isspace(ch) && inword)
		{
			inword = false;
		}
		preword = ch;
	}
	if (preword != '\n')
		num2++;
	printf("chars:%d \t words:%d \t lines:%d", num, num1, num2);
	printf("\n");
	system("pause");
	return 0;
}
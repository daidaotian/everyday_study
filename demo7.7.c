#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int main()
{
	char ch;
	int num = 0;//��ĸ����
	int num1 = 0;//���ʸ���
	int num2 = 0;//����
	int inword = false;
	char preword;
	char stop = '|';
	while ((ch = getchar()) != stop)//ch = getchar()����һ��Ҫ�����ţ���Ȼ�����У�ch�ò�����Ҫ��ֵ
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
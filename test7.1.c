#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	int lines = 0;
	int blanks = 0;
	int others = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
			lines++;
		else if (isblank(ch))//' 'Ò²ÐÐ
			blanks++;
		else
			others++;
	}
	printf("%d       %d      %d", lines, blanks, others);
	printf("\n");
	system("pause");
	return 0;
}
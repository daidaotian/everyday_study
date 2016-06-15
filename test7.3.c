#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
int main()
{
	int n, ooshu, sumo, jishu, sumj;
	ooshu = sumo = jishu = sumj = 0;
	while ((scanf("%d", &n)))
	{
		if (n == 0)
			break;
		else if (n % 2 == 0)
		{
			ooshu++;
			sumo += n;
		}
		else
		{
			jishu++;
			sumj += n;
		}
	}
	printf("%d       %d      %d      %d", ooshu, sumo, jishu, sumj);
	printf("\n");
	system("pause");
	return 0;
}
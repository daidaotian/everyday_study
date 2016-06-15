#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
int main()
{
	int n, ooshu, sumo, jishu, sumj;
	ooshu = sumo = jishu = sumj = 0;
	while (((scanf("%d", &n)==1))&&(n!=0))
	{
		switch (n % 2)
		{
		case 0:
			ooshu++;
			sumo += n;
			break;
		case 1:
			jishu++;
			sumj += n;
			break;
		default:
			printf("error!!!!!")
		}
	}
	printf("%d       %d      %d      %d", ooshu, sumo, jishu, sumj);
	printf("\n");
	system("pause");
	return 0;
}
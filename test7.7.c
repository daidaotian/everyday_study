#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
int main()
{
	int hours;
	float net = 0;
	float gross = 0;
	float taxes = 0;
	scanf("%d",hours);
	
	if (hours > 40)
		gross = 40 * 10 + (hours - 40)*1.5 * 10;
	else
		gross = hours * 10;
	if (gross <=300)
	{
		taxes = gross*0.15;
		net = gross - taxes;
	}
	else if (gross <= 450)
	{
		taxes = 300 * 0.15 + (gross - 300)*0.2;
		net = gross - taxes;
	}
	else
	{
		taxes = 300 * 0.15 + 150 * 0.2 + (gross - 450)*0.25;
		net = gross - taxes;
	}

	printf("%d       %d      %d      ", gross, net, taxes);
	printf("\n");
	system("pause");
	return 0;
}
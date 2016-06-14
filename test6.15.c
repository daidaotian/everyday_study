#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 8
int main()
{
	float da, de;
	da = de = 100;
	int i = 0;
	while (de <= da)
	{
		de += de*0.05;
		da += 100 * 0.1;
		i++;
	}
	printf("%d         da:%f          de:%f", i, da, de);

	printf("\n");
	system("pause");
	return 0;
}
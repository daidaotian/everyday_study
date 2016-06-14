#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float a, b;
	int status;
	printf("input two float numbers\n");
	while (scanf("%f%f", &a, &b) == 2)
	{
		printf("%f\n", (a - b) / (a*b));
		printf("input two float numbers\n");
	}
	printf("\n");
	system("pause");
	return 0;
}
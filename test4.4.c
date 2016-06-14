#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float height;
	char name[40];

	printf("Enter your height in inches: ");
	scanf("%f", &height);
	printf("Enter your name: ");
	scanf("%s", name);
	printf("%s, you are %.3f feet tall\n", name, height / 12.0);
	system("pause");
	return 0;
}
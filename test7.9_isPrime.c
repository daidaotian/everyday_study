#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NO 0
#define YES 1
int main(void)
{
	long num;                      /* value to be checked */
	long div;                      /* potential divisors  */
	long lim;                      /* limit to values     */
	int prime;

	printf("Please enter limit to values to be checked; ");
	printf("Enter q to quit.\n");
	while (scanf("%ld", &lim) == 1 && lim > 0)
	{

		//Ĭ�������Ϊ�����n��������
		//��   n��  ��2��n  ����ȫ��%һ�飬������κ�һ��ģΪ0����n�Ͳ����������������Ĭ�����������
		for (num = 2; num <= lim; num++)//���е������Ǵ�2��ʼ�ģ�2��3��5��7��11����������

		{
			for (div = 2, prime = YES; (div * div) <= num; div++)
			if (num % div == 0)
				prime = NO;           /* number is not prime  */
			if (prime == YES)
				printf("%ld is prime.\n", num);
		}
		while (getchar() != '\n')//���������ʣ�ಿ�֣���ֹӰ���´�����
			continue;
		printf("Please enter another limit; ");
		printf("Enter q to quit.\n");
	}
	printf("\n");
	system("pause");
	return 0;
}
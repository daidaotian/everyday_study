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

		//默认情况认为输入的n是素数，
		//把   n对  从2到n  的数全部%一遍，如果有任何一个模为0，则n就不是素数，否则就是默认情况是素数
		for (num = 2; num <= lim; num++)//所有的素数是从2开始的：2、3、5、7、11、、、、、

		{
			for (div = 2, prime = YES; (div * div) <= num; div++)
			if (num % div == 0)
				prime = NO;           /* number is not prime  */
			if (prime == YES)
				printf("%ld is prime.\n", num);
		}
		while (getchar() != '\n')//跳过输入的剩余部分，防止影响下次输入
			continue;
		printf("Please enter another limit; ");
		printf("Enter q to quit.\n");
	}
	printf("\n");
	system("pause");
	return 0;
}
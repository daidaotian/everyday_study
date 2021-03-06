#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	const double price_artichokes = 1.25;
	const double price_beets = 0.65;
	const double price_carrots = 0.89;
	const double DISCOUNT_RATE = 0.05;

	char ch;
	double lb_artichokes;
	double lb_beets;
	double lb_carrots;
	double lb_total;

	double cost_artichokes;
	double cost_beets;
	double cost_carrots;
	double cost_total;
	double final_total;
	double discount;
	double shipping;

	printf("Enter a to buy artichokes, b for beets, ");
	printf("c for carrots, q to quit: ");
	while ((ch = getchar()) != 'q' && ch != 'Q')
	{
		if (ch == '\n')//跳过刚开始输入可能无意按下的enter（即回车）
			continue;
		if (getchar() != '\n')//跳过下次输入之前的其他字符，否则会留在缓冲区直接当成了下次的输入
			continue;
		ch = tolower(ch);
		switch (ch)
		{
		case 'a': printf("Enter pounds of artichokes: ");
			scanf("%lf", &lb_artichokes);
			break;
		case 'b': printf("Enter pounds of beets: ");
			scanf("%lf", &lb_beets);
			break;

		case 'c': printf("Enter pounds of carrots: ");
			scanf("%lf", &lb_carrots);
			break;
		default: printf("%c is not a valid choice.\n");
		}
		printf("Enter a to buy artichokes, b for beets, ");
		printf("c for carrots, q to quit: ");
	}

	cost_artichokes = price_artichokes * lb_artichokes;
	cost_beets = price_beets * lb_beets;
	cost_carrots = price_carrots * lb_carrots;
	cost_total = cost_artichokes + cost_beets + cost_carrots;
	lb_total = lb_artichokes + lb_beets + lb_carrots;
	if (lb_total <= 0)
		shipping = 0.0;
	else if (lb_total < 5.0)
		shipping = 3.50;
	else if (lb_total < 20)
		shipping = 10.0;
	else
		shipping = 8.0 + 0.1 * lb_total;
	if (cost_total > 100.0)
		discount = DISCOUNT_RATE * cost_total;
	else
		discount = 0.0;
	final_total = cost_total + shipping - discount;
	printf("Your order:\n");
	printf("%.2f lbs of artichokes at $%.2f per pound:$ %.2f\n",
		lb_artichokes, price_artichokes, cost_artichokes);
	printf("%.2f lbs of beets at $%.2f per pound: $%.2f\n",
		lb_beets, price_beets, cost_beets);
	printf("%.2f lbs of carrots at $%.2f per pound: $%.2f\n",
		lb_carrots, price_carrots, cost_carrots);
	printf("Total cost of vegetables: $%.2f\n", cost_total);
	if (cost_total > 100)
		printf("Volume discount: $%.2f\n", discount);
	printf("Shipping: $%.2f\n", shipping);
	printf("Total charges: $%.2f\n", final_total);

	printf("\n");
	system("pause");
	return 0;
}


#include <stdio.h>
#pragma warning(disable:4996)


int pay(int *num, int *maxPay)
{
	int i, item = 0, items = 0;
	*maxPay = 0;
	*num = 0;
	char name[51] = "";
	double sum;
	while (1)
	{
		printf("\nEnter clinets name (enter EXIT to exit):");
		scanf("%s", name);
		if (name[0] == 'E' && name[1] == 'X' && name[2] == 'I' && name[3] == 'T')
			break;
		sum = 0;
		printf("\nEnter amount of items:");
		scanf_s("%d", &items);
		for (i = 0; i < items; i++)
		{
			scanf_s("%d", &item);
			printf(" ");
			sum += item;
		}
		if (items == 1)
			sum -= sum * 0.1;
		else if (items == 2)
			sum -= sum * 0.2;
		else
			sum -= sum * 0.3;
		printf ("\nThe clinet %s payed %.2f", name, sum);
		if (*maxPay < sum)
			*maxPay = (int)sum;
		(*num)++;
	}
}
int main1()
{
	int num;
	int maxPay;
	pay(&num, &maxPay);
	printf("\nThe most exspincive purchace was %d", maxPay);
	printf("\nThere where %d clinet that used the sale", num);
	return 0;
}
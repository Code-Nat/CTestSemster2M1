#include <stdio.h>

#pragma once

int sumOfDiv(int data[], int size, int div)
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
		if (!(data[i] % div))
			sum += data[i];
	return sum;
}

int main4()
{
	int data[] = { 1,2,56,78,23 };
	printf ("\n%d", sumOfDiv(data, 5, 3));
	return 0;
}
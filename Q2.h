#include <stdio.h>

#pragma once

int fun(int counter)
{
	printf("\n%d", counter);
	if (counter < 3)
	{
		counter++;
		fun(fun(fun(counter)));
	}
	return counter;
}

int main2()
{
	fun(1);
	return 0;
}
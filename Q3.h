#include <stdio.h>
#include <stdlib.h>

#pragma once

char* duplicate(char* letters, int* digits)
{
	int i,j, sum=0, counter = 0;
	char* ptr = NULL;
	for (i = 0; letters[i] != '\0'; i++)
	{
		if (!((letters[i] >= 'a' && letters[i] <= 'z') || (letters[i] >= 'A' && letters[i] <= 'Z')))
			return NULL;
		if (digits[i] < 0)
			return NULL;
		sum += digits[i];
	}
	ptr = (char *)malloc(sizeof(char) * (sum + 1));

	for (i = 0; letters[i] != '\0'; i++)
	{
		for (j = 0; j < digits[i]; j++)
		{
			*(ptr + counter++) = letters[i];
		}
	}
	*(ptr + counter) = (char)'\0';
	return ptr;
}

int main3()
{
	char letters[] = "abcd";
	int digits[] = { 1,2,3,4 };
	printf ("\n%s", duplicate(letters, digits));
	return 0;
}
/**/
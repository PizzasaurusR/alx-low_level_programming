#include "main.h"
#include <stdio.h>

/**
 * main - prints sum of all natural numbers
 * which are multiple of 3 or 5 under 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int sum3, sum5, sum;
	int currentNum;

	sum3 = 0;
	sum5 = 0;
	sum = 0;

	for (currentNum = 0; currentNum < 1024; ++currentNum)
	{
		if ((currentNum % 3) == 0)
		{
			sum3 = sum3 + currentNum;
		} else if ((currentNum % 5) == 0)
		{
			sum5 = sum5 + currentNum;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}

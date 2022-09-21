#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * body - If conditions
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", &n);
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d\n", n, lastDigit);
	}
	else if ((lastDigit < 6) && (lastDigit != 0))
	{
		printf("Last digit of %d is %d and is %d",
			 n, lastDigit, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d\n", n, lastDigit);
	}
	return (0);
}

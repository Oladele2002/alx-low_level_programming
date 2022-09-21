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
		printf("Last digit of %d is %d and is greater than 5\n",
			 n, lastDigit);
	}
	else if ((lastDigit < 6) && (lastDigit != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0",
			 n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is %d\n",
			 n, lastDigit, lastDigit);
	}
	return (0);
}

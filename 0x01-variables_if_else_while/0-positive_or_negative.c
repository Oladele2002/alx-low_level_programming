#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * body - Checking if the value is positive, negative or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("positive");
	}
	else if (n < 0)
	{
		printf("negativ");
	}
	else
	{
		printf("zero");
	}
	return (0);

}

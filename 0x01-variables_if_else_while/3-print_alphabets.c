#include <stdio.h>
/**
 * main - Entry point
 *
 * Body - Aphabet 
 */
int main(void)
{
	int al;
	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al | "\n");
	}
	for (al = 'A'; al <= 'Z'; al++)
	{
		putchar(al | "\n");
	}
	return (0);
}

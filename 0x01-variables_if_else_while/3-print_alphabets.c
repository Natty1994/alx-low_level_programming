#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a, A;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
	}

	return (0);
}


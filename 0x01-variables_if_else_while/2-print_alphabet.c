#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphabet letters
 *
 * return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + 48);

			if (a != 9)
			{
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');

	return (0);
}

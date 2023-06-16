#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a = a + 1)
	{
		printf("%d", a);
	}
	putchar('\n');

	return (0);
}

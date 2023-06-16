#include <stdio.h>
/**
 * main - Entry point
 *
 * description: print a quote with write function
 *
 * return:1 means an error.
 */
int main (void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(1, quo, 59);
	return (1);
}

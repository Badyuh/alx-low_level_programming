#include <stdio.h>

/**
 * main - Entry point
 * This program prints every ASCII decimal digit
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
		putchar(a);
	putchar('\n');
	return (0);
}

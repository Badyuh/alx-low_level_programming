#include <stdio.h>

/**
 * main - Entry point
 * This program prints every letter of the alphabet
 * in reverse order
 * Return: 0 (Success)
 */
int main(void)
{
	int b;

	for (b = 122; b > 96; b--)
		putchar(b);
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 * This program prints comma-separated
 * combined digits
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a < 57; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			if (a != 56)
			{
				putchar(44);
				putchar(32);
			}
			else
			{
				putchar(10);
			}
		}
	}
	return (0);
}

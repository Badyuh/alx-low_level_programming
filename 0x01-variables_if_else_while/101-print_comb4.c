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
	int c;

	for (a = 48; a < 56; a++)
	{
		for (b = a + 1; b < 57; b++)
		{
			for (c = b + 1; c < 58; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 55)
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
	}
	return (0);
}

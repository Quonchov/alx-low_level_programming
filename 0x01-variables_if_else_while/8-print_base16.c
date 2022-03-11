#include <stdio.h>

/**
 * main - Prints 0 -9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 48; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
		}
		else if (num > 41)
		{
			putchar(num - 10 + 'A');
		}
	}
		putchar(10);
	return (0);
}

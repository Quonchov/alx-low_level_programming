#include <stdio.h>

/**
 * main - Prints 0 -9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
		putchar(10);
	return (0);
}

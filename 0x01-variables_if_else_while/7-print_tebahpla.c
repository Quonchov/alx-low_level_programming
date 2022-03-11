#include <stdio.h>

/**
 * main - Prints 0 -9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 122; num > 96; num--)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}

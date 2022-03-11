#include <stdio.h>

/**
 * main - Prints 0 -9
 *
 * Return: Alwasy 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}

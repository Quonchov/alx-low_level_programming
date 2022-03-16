#include "main.h"

/**
 * main - print _putchar using put, include a newline too
 *
 * Description: prints _putchar
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char c[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}

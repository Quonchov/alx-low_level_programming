#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Alwasy 0 (success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar (alphabet);
		alphabet++;
	}
	putchar ('\n');
	return (0);
}

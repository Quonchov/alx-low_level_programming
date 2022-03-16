#include "main.h"

/**
 * main - Prints the alphabet in lowercase
 *
 * Description: Prints lowercase alphabets
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar (alphabet);
		alphabet++;
	}
	_putchar ('\n');
	return (0);
}

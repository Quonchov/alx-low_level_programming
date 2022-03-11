#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Alwasy 0 (success)
 */
int main(void)
{
	char alpha_lower = 'a', alpha_upper = 'A';

	while (alpha_lower <= 'z' && alpha_upper <= 'Z')
	{
		putchar (alpha_lower);
		putchar (alpha_upper);
		alpha_lower++;
		alpha_upper++;
	}
	putchar ('\n');
	return (0);
}

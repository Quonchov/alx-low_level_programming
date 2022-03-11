#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Alwasy 0 (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q' || alphabet == 'e')
		{
			continue;
		}
		putchar (alphabet);
	}
	putchar ('\n');
	return (0);
}

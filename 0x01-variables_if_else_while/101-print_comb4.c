#include <stdio.h>

/**
 * main - Prints 0 -9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1 = 48, num2 = 48, num3 = 48;

	for (num1; num1 < 58; num1++)
	{
		num2 = num1 + 1;
		for (num2; num2 < 58; num2++)
		{
			num3 = num2 + 1;
			for (num3; num3 < 58; num3++)
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);

					if (num1 < 55 || num2 < 56 || num3 < 57)
					{
						putchar(44);
						putchar(32);
					}
			}
		}
	}
		putchar(10);
	return (0);
}

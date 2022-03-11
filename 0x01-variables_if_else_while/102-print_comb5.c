#include <stdio.h>

/**
 * main - Prints 0 -9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1 = 48, num2 = 48, num3 = 48, num4 = 48;

	for (num1; num1 < 58; num1++)
	{
		num2 = num1 + 1;
		for (num2; num2 < 58; num2++)
		{
			num4 = num2 + 1;
			num3 = num1;
			for (num3; num3 < 58; num3++)
			{
				for (num4; num4 < 58; num4++)
				{
					putchar(num1);
					putchar(num2);
					putchar(32);
					putchar(num3);
					putchar(num4);
					if (num1 < 57 || num2 < 56 || num3 < 57 || num4 < 57)
					{
						putchar(44);
						putchar(32);
					}
				}
				num4 = 48;
			}
		}
	}
	putchar(10);
	return (0);
}

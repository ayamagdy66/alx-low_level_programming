#include "main.h"

/**
 * times_table - print out the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (j = 0 ; j <= 9 ; j++)
	{
		_putchar('0');
		for (i = 1 ; i <= 9 ; i++)
		{
			int sum = i * j;

			_putchar(',');
			if (sum / 100 == 0)
			{
				_putchar(32);
			}
			if (sum / 10 == 0)
			{
				_putchar(32);
			}
			else
			{
				_putchar('0' + (sum / 10));
			}
			if (sum % 10 == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar('0' + (sum % 10));
			}
		}
		_putchar('\n');
	}



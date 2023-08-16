#include "main.h"

/**
 * print_sign - prints the sign of the given number +/-
 * @n: Test the number
 * Return: 1 if zero else return (-1) < n, or (+) > zero
 *
*/
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
return (1);
}
else if (n < 0)
{
	_putchar('-');
return (-1);
}
else
{
	_putchar('0');
return (0);
}

}

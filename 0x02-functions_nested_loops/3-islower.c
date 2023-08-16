#include "main.h"

/**
 * _islower - Check if it lowercase character
 * @c: character to test
 * Return: 1 if 'c' is lowercase else is zero
 *
 * @c: character to test
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
return (0);
}

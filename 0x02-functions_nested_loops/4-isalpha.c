#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: to test character c
 * Return: 1 if 'c' is lowercase or uppercase else return zero
 *
*/
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
	return (1);
else if (c >= 65 && c <= 90)
	return (1);
		return (0);


}

#include "main.h"

/**
 * _strlen - returns the length of @s
 * @s: the string
 * Return: length of @s
**/

int _strlen(char *s)
{
		int i;

		for (i = 0; s != '\0'; i++)
			++i;
		return (i);

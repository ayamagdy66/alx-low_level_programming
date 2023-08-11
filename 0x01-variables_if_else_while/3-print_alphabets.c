#include <stdio.h>
/**
 * main - main - entry point
 *
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 *
 * Return: 0 (Success)
*/
int main(void)
{
char ch = 'a';
char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*prints a - z*/
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}

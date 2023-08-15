#include "main.h"

/**
 * main - Entry point
 *
 * Description: A C  programme that prints putchar with putchar
 *
 * Return: 0 (Success)
 *
*/
int main(void)
{
char str[] = "_putchar";
int ch;
for (ch = 0; ch < 8; ch++)
_putchar(str[ch]);
printf("\n");
return (0);
}

#include "main.h"

/**
 *main - entry point
 *Description: prints putchar with putchar
 *Return: Always 0 (success)
*/

int main(void)
{
char str[] = "putchar";
int ch;
for (ch = 0; ch < 8; ch++)
{
_putchar(str[ch]);
}
_putchar('\n');
return (0);
}

#include "main.h"

/**
 * Print_alphabet - utilize putchar to print_alphabet in lowercase from a to z
*/

void print_alphabet(void)
{
int alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
_putchar(alpha);
_putchar('\n');
}

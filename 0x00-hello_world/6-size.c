#include <stdio.h>

/**
 * main -entry point
 *
 * Description: A C prgramme that prints the sizeof function
 *
 * Return: Always 0 (Success)
 *
*/
int main(void)
{
printf("size of a char: %u byte(s)\n", Sizeof(char));
printf("size of an int: %u byte(s)\n", Sizeof(int));
printf("size of a long int: %u byte(s)\n", Sizeof(long int));
printf("size of a long long int: %u byte(s)\n", Sizeof(long long int));
printf("size of a float: %u byte(s)\n", Sizeof(float));
return (0);
}

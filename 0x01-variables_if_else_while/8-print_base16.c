#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Generate a random number, determine its last digit,
 *              and print a message based on the last digit.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char digit;
for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}
for (digit = 'a'; digit <= 'f'; digit++)
{
putchar(digit);
}
putchar('\n');
return (0);
}

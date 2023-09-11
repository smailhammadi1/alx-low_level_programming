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
int digit;
for (digit = 0; digit <= 9; digit++)
{
putchar(digit + '0');
if (digit < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

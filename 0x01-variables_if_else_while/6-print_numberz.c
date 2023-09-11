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
int digit = 0;
while (digit <= 9)
{
putchar(digit + '0');
digit++;
}
putchar('\n');
return (0);
}

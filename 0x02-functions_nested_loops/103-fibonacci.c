#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
long int sum = 0;
long int a = 1, b = 2;
while (a <= 4000000)
{
long int next;
if (a % 2 == 0)
{
sum += a;
}
next = a + b;
a = b;
b = next;
}
printf("%ld\n", sum);
return (0);
}

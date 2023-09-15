#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
long int a = 1;
long int b = 2;
long int next;
int count = 2;
printf("%ld, %ld", a, b);
while (count < 98)
{
next = a + b;
printf(", %ld", next);
a = b;
b = next;
count++;
}
printf("\n");
return (0);
}

#include <stdio.h>

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
int row, column, product;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
product = row * column;
if (column == 0)
putchar('0');
else
printf(", %2d", product);
}
putchar('\n');
}
}

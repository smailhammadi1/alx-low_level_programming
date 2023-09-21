#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13 cipher
 * @str: The input string
 *
 * Return: A pointer to the resulting string
 */
char *rot13(char *str)
{
char *start = str;
char lower[] = "abcdefghijklmnopqrstuvwxyz";
char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *ptr_lower = lower;
char *ptr_upper = upper;
while (*str)
{
if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
{
char *ptr = (*str >= 'a' && *str <= 'z') ? ptr_lower : ptr_upper;
char offset = (*str >= 'a' && *str <= 'z') ? 'a' : 'A';
*str = ptr[(*str - offset + 13) % 26];
}
str++;
}
return (start);
}

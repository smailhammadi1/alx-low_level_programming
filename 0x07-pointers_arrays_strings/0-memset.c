/**
 * string_toupper - Convetters in a string to uppercase
 * @str: The input string
 * Return: A pointer to the resulting string
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int i;
int dest_len = 0;
int src_len = 0;
while (dest[dest_len] != '\0')
dest_len++;
while (src[src_len] != '\0')
src_len++;
for (i = 0; i < src_len; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + src_len] = '\0';
return (dest);
}

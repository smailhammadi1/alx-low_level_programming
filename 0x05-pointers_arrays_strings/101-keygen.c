#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password.
 *
 * Return: 0 on success.
 */
int main(void)
{
char password[12];
int i, sum, rand_char;
srand(time(0));
for (i = 0; i < 11; i++)
{
rand_char = rand() % 62;
if (rand_char < 26)
{
password[i] = 'A' + rand_char;
}
else if (rand_char < 52)
{
password[i] = 'a' + (rand_char - 26);
}
else
{
password[i] = '0' + (rand_char - 52);
}
}
sum = 0;
for (i = 0; i < 11; i++)
{
sum += password[i];
}
password[11] = 2772 - sum;
password[12] = '\0';
printf("%s", password);
return (0);
}

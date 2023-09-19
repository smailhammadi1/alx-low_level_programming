#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * is_valid_password - Checks if a password is valid for "101-crackme."
 * @password: The password to validate.
 * 
 * Return: 1 if the password is valid, 0 otherwise.
 */

char generate_random_character()
{
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int index = rand() % (sizeof(charset) - 1);
return charset[index];
}

/**
 * is_valid_password - Checks if a password is valid for "101-crackme."
 * @password: The password to validate.
 * 
 * Return: 1 if the password is valid, 0 otherwise.
 */

int main(void)
{
int i;
srand(time(NULL));

char *password;

for (i = 0; i < PASSWORD_LENGTH; i++)
{
password[i] = generate_random_character();
}

password[PASSWORD_LENGTH] = '\0';

printf("%s\n", password);

return (0);
}

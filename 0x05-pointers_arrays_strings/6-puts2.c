#include "holberton.h"
/**
 *puts2 - Prints string
 *@str: String to print pair numbers
 *Return: void
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i += 2)
_putchar(str[i]);
_putchar('\n');
}

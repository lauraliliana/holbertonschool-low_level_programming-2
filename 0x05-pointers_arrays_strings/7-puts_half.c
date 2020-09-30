#include "holberton.h"
/**
 *puts_half - Prints the second part of the string
 *@str: String to print the second half
 *Return: void
 */
void puts_half(char *str)
{
int i = 0, l;
while (str[i] != '\0')
{
i++;
}
l = i / 2;
i = i - 1;
while (l <= i)
{
_putchar(str[l]);
l++;
}
_putchar(10);
}

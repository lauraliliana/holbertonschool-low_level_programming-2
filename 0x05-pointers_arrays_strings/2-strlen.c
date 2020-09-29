#include "holberton.h"
/**
 *swap_int - Swaps 2 ints
 *@s: String to count
 *Return: Always 0
 */
int _strlen(char *s)
{
  int l;
  for (l = 0; s[l] != '\0'; ++l){}
  return (l);
}

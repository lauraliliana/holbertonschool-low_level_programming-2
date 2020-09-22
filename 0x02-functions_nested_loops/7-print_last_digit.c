#include "holberton.h"
/**
 *print_last_digit - Prints the method
 *Return: Always 0
 */
int print_last_digit(int r)
{
  int s;
  s = (r % 10);
  if (s < 0)
    {
      s = s * -1;
    }
  _putchar(s + '0');
  return (s);
  
}

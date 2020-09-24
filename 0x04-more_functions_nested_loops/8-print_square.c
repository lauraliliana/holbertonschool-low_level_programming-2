#include "holberton.h"
/**
 *print_diagonal - Prints the method
 *@n: is the length of the diagonal
 *Return: Always 0
 */
void print_square(int size)
{
  int l, s;
  l = size;
  if (l <= 0)
    _putchar(10);
  if (l > 0)
    {
      for (l = 0; l < size; l++)
	{
	  for (s = 0; s < size; s++)
	    {
	      _putchar('#');
	    }
	  _putchar(10);
	}
    }
}

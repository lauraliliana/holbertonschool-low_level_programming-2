#include "holberton.h"
/**
 *_isalpha - Prints the method
 *Return: Always 0
 */
int _isalpha(int c)
{
  if (c > 'a' && c < 'z')
    return (1);
  else
    return (0);  
}

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - Creates an array initialized in a specific char
 *@size: string size
 *@c: first char of the string
 *Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
  char *s[size];
  if (size == 0)
    {
    return (NULL);
    }
  *s = malloc(size * sizeof(c));
  *s[0] = c;
  return (*s);    
}

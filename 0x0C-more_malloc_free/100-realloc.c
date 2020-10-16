#include "holberton.h"
#include <stdlib.h>
/**
 *_realloc -Rellocates 
 *@ptr: string to change
 *@old_size: string to add
 *@new_size: number of items in the secont string
 *Return: Always 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
  char *p;
  unsigned int i = 0;

  if (ptr == NULL)
    {
      p = malloc(new_size);
      return (p);
    }
  if (new_size == 0)
    {
      free(ptr);
      return (NULL);
    }
  if (old_size == new_size)
    return (ptr);
  p = malloc(new_size);
  if (p == NULL)
    return (NULL);
  while (i < old_size && i < new_size)
    i++;
  free(ptr);
  return (p);
}

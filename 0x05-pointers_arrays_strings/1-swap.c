#include "holberton.h"
/**
 *swap_int - Swaps 2 ints
 *Return: Always 0
 */
void swap_int(int *a, int *b)
{
  int *p = a;
  int *o = b;
  int c = *p;
  int d = *o;
  *p = d;
  *o = c;
}

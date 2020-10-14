#include "holberton.h"
#include <stdlib.h>
/**
 *str_concat - Concatenates 2 strings
 *@s1: string to concatenate
 *@s2: string to concatenate
 *Return: Always 0
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, c;
char *con;
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
con = malloc(sizeof(char) * (i + j + 1));
for (c = 0; c <= i; c++)
con[c] = s1[c];
for (c = 0; c <= j; c++)
con[i + c] = s2[c];
return (con);
}

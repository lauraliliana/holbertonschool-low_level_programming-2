#include "holberton.h"
/**
 *_strcat - Concat 2 strings
 *@dest: string to print
 *@src: string to paste
 *Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
int a = 0, j = 0;
while (dest[a] != '\0')
{
++a;
}
while (src[j] != '\0')
{
dest[a] = src[j];
++j;
}
dest[a] = '\0';
return (dest);
}

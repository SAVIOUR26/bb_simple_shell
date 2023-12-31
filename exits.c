#include "shell.h"
/**
**_strncpy - this copies the string
*@dest: destination string 2 be copied 
*@src: source string
*@n: amount of chars 2 be copied
*Return: concatenated string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i, j;
char *s = dest;
i = 0;
while (src[i] != '\0' && i < n - 1)
{
dest[i] = src[i];
i++;
} if (
i
<
n)
{
j = i;
while (j < n)
{
dest[j] = '\0';
j++;
}
} return (
s);
}
/**
**_strncat - this concatenates 2 strings
*@dest: first string
*@src: second string
*@n: the amount of bytes 2 be maximally used
*Return: concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
char *s = dest;
i = 0;
j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
} if (
j
<
n)
dest[i] = '\0';
return (s);
}
/**
**_strchr - this locates a char in the string
*@s: string 2 be parsed1
*@c: char to look for
*Return: the pointer 2 memory area s
*/
char *_strchr(char *s, char c)
{
do {
if (*s == c)
return (s);
} while (*s++ != '\0');
return (NULL);
}


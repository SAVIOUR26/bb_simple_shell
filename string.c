#include "shell.h"

/**
 * _strlen - this returns length of the string
 * @s: string whose length to check
 *
 * Return: the integer length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - this performs lexicogarphic comparison of 2 strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: if s1 < s2 negative , if s1 > s2 positive ,if s1 == s2 zero 
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - this checks if needle starts with haystack
 * @haystack: the string to search
 * @needle: substring to find
 *
 * Return: address of the next character of haystack else NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - this concatenates two strings
 * @dest: destination buffer
 * @src: source buffer
 *
 * Return: the pointer 2 destination buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}



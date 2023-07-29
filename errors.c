#include "shell.h"
/**
* _eputs - this prints the input string
* @str:string 2 be printed
**
Return: doen't return anything
*/
void _eputs(char *str)
{
int i = 0;
if (!str)
return;
while (str[i] != '\0')
{
_eputchar(str[i]);
i++;
}
}
/**
* _eputchar - this writes character c 2 stderr
* @c: character 2 print
**
Return:  1 On success.
* -1 is returned On error, & errno set.
*/
int _eputchar(char c)
{
static int i;
static char buf[WRITE_BUF_SIZE];
if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
{
write(2, buf, i);
i = 0;
} if (
c
!= BUF_FLUSH)
buf[i++] = c;
return (1);
}
/**
* _putfd - this writes character c 2 given fd
* @c: character 2 print
* @fd: The filedescriptor 2 write 
**
Return: 1 On success.
* -1 is returned On error, & errno is set.
*/
int _putfd(char c, int fd)
{
static int i;
static char buf[WRITE_BUF_SIZE];
if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
{
write(fd, buf, i);
i = 0;
} if (
c
!= BUF_FLUSH)
buf[i++] = c;
return (1);
}
/**
* _putsfd - this prints the input string
* @str: string 2 be printed
* @fd: filedescriptor 2 write 2
**
Return: number of characters put
*/
int _putsfd(char *str, int fd)
{
int i = 0;
if (!str)
return (0);
while (*str)
{
i += _putfd(*str++, fd);
} return (
i);
}


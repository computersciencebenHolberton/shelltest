#include "shell.h"
/**
 *_strchr - search string
 *@str:find
 *@chr:look inside
 *Return:first accorence or NULL
 */

char *_strchr(char *str, int chr)
{
while (*str)
{
if (*str == chr)
return (str);
str++;
}
return (NULL);
}

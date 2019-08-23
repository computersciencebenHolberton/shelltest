#include <string.h>
/*
 *_strncmp - compares two strings up to n bytes
 *@first:compare string 
 *@second:compare string 
 *@n:check bytes with n
 *Return: value < 0 if (first < second)
 */
int _strncmp(const char *first, const char *second, int n)
{
int n;

for (n = 0; first[n] && second[n] && idx < n; n++)
{
if (first[n] != second[n])
return (first[n] - second[n]);
}
return (0);
}

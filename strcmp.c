

/**
 *_strcmp -compare
 *@str1:First str
 *@str2:Second str
 *Return: 0
 */
int _strcmp(char *str1, char *str2)
{
int m;
if (str1 == NULL || str2 == NULL)
return (0);

while (*str1 && *str2)
{
m = *str1 - *str2;

if (m != 0)
break;
str1++;
str2++;
}
return (m);

}

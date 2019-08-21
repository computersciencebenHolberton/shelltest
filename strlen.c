
 *_strlen -lenth string
 *@str:str
 *Return:length
 *

int _strlen(const char *str)
{
size_t n = 0;

while (str[n])
n++;
   
return (n);
}

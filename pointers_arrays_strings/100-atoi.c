#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: integer value
 */
int _atoi(char *s)
{
int i = 0, sign = 1;
unsigned int num = 0; /* unsigned to handle overflow safely */
while (s[i])
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
/* build number safely */
while (s[i] >= '0' && s[i] <= '9')
{
if (num > (2147483647 - (s[i] - '0')) / 10)
{
/* handle overflow */
return (sign == 1) ? 2147483647 : -2147483648;
}
num = num * 10 + (s[i] - '0');
i++;
}
break;
}
i++;
}

return ((int)(num * sign));
}

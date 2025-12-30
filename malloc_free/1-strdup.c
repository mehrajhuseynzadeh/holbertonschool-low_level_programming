#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated copy of a string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL or malloc fails
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, len;

if (str == NULL)
return (NULL);

/* find length of str */
for (len = 0; str[len]; len++)
;

dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);

for (i = 0; i <= len; i++) /* include null terminator */
dup[i] = str[i];

return (dup);
}

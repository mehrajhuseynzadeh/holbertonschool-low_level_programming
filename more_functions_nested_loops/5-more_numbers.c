#include "main.h"

void more_numbers(void)
{ 
int i, n;
for (i = 0; i < 10; i++)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
_putchar('1');    /* birinci rəqəm (yalnız 1 olur) */

_putchar((n % 10) + '0'); /* ikinci rəqəm */
}
_putchar('\n'); /* yeni sətir */
}
}

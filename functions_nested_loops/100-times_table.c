#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of times table
 *
 * Return: void
 */
void print_times_table(int n)
{
int i, j, prod;

if (n < 0 || n > 15)
return;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
prod = i * j;
if (j != 0)
{
_putchar(',');
_putchar(' ');
if (prod < 10)
_putchar(' ');
if (prod < 100)
_putchar(' ');
}
if (prod >= 100)
_putchar('0' + prod / 100);
if (prod >= 10)
_putchar('0' + (prod / 10) % 10);

_putchar('0' + prod % 10);
}
_putchar('\n');
}
}

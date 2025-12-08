#include <stdio.h>

int main(void)
{
	int n = 48; /* ASCII '0' */

	while (n <= 57) /* ASCII '9' */
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

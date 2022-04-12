#include "main.h"

/**
 * main-main block
* Description:Print -putchar in a new line
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char p[] = "putchar";

	for (i = 0; i < 7; i++)
		{
		_putchar(p[i]);
		}
		_putchar('\n');
	return (0);
}

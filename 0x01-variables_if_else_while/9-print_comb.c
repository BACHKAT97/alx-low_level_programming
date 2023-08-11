#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase, separated by commas and spaces.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++) /* ASCII for '0' to '9' */
	{
		putchar(num);
		if (num != 57) /* Don't print comma and space after '9' */
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

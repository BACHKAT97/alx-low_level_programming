#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++) /* ASCII for '0' to '9' */
		putchar(num);
	for (num = 97; num <= 102; num++) /* ASCII for 'a' to 'f' */
		putchar(num);
	putchar('\n');

	return (0);
}

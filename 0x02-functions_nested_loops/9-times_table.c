#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: void (No return value)
 */
void times_table(void)
{
    int row, col, result;

    for (row = 0; row <= 9; row++)
    {
        for (col = 0; col <= 9; col++)
        {
            result = row * col;
            if (col == 0)
            {
                _putchar(result + '0');
            }
            else if (result <= 9)
            {
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
                _putchar(result + '0');
            }
            else
            {
                _putchar(',');
                _putchar(' ');
                _putchar(result / 10 + '0');
                _putchar(result % 10 + '0');
            }
        }
        _putchar('\n');
    }
}

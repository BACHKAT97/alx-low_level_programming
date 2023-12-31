#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
    int i, j, space;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 1; i <= size; i++)
    {
        for (space = 0; space < size - i; space++)
        {
            _putchar(' ');
        }
        for (j = 0; j < i; j++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}

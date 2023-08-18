#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
    long num = 612852475143;
    long largest;
    long i;

    /* Start by dividing num by the first prime number, which is 2 */
    while (num % 2 == 0)
    {
        largest = 2;
        num /= 2;
    }

    /* Now num is odd and can skip one element (Note i = i +2) */
    for (i = 3; i <= sqrt(num); i += 2)
    {
        while (num % i == 0)
        {
            largest = i;
            num = num / i;
        }
    }

    /* If num is a prime number greater than 2 */
    if (num > 2)
        largest = num;

    printf("%ld\n", largest);

    return (0);
}

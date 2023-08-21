#include "main.h"

int _atoi(char *s)
{
    int i = 0, sign = 1, num = 0, started = 0;

    while (s[i])
    {
        // If we encounter a sign
        if (s[i] == '-' || s[i] == '+')
        {
            if (started)  // If we have already started reading numbers, break.
                break;

            if (s[i] == '-')
                sign *= -1;
        }
        // If we encounter a number
        else if (s[i] >= '0' && s[i] <= '9')
        {
            started = 1;
            num = num * 10 + (s[i] - '0');
        }
        // If we encounter a character other than signs and numbers
        else if (started)
        {
            break;
        }
        i++;
    }

    return num * sign;
}

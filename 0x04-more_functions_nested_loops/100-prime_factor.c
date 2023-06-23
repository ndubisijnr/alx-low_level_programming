#include <stdio.h>
/**
 * print_number - prints the largest prime factor of the number .
 *
 * @n: number.
 */
long long findLargestPrimeFactor(long long n)
{
    long long factor = 2;

    while (factor * factor <= n)
    {
        if (n % factor == 0)
        {
            n /= factor;
        }
        else
        {
            factor++;
        }
    }

    return n;
}

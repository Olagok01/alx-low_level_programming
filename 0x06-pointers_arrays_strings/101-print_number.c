#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */

void print_number(int n)
{
        unsigned int num = n;

        if (n < 0)
        {
                _putchar('-');
                num = -num;
        }

        if (num >= 1000 && num <= 9999)
        {
                _putchar((num / 1000) + '0');
                _putchar (((num / 100) % 10) + '0');
                _putchar(((num / 10) % 10) + '0');
        }

        if (num >= 100 && num <= 999)
        {
                _putchar((num / 100) + '0');


                _putchar(((num / 10) % 10) + '0');
        }


        if (num >= 10 && num <= 99)
        {
                _putchar((num / 10) + '0');
        }


        _putchar((num % 10) + '0');


}

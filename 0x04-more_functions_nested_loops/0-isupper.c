#include "main.h"

/**
 * _isupper - It takes one argument
 * @c: The character to be checked
 * Description -  It checks for uppercase characters
 * Return: 1 if c uppercase else return 0
 */
int _isupper(int X)
{

        if (X >= 65 && X <= 90)
        {
                return (1);
        }
                return (0);
}

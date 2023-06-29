#include "main.h"


/**
 * _isupper - It takes one argument
 * @c: The character to be checked
 * Description -  It checks for uppercase characters
 * Return: 1 if c uppercase else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _isupper - checking if a character is upper
 * @x: The number to be checked
 *
 * Return: 1 if the character is right and else
 * if otherwise
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);

}

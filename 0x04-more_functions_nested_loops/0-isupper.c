#include "main.h"

/**
  *_isupper - check if C is upper
  * @C: input for alpabet
  * Return: 1 if its uppercase, 0 if not
*/

int _isupper(int C)
{
	if (C >= 65 && C <= 90)
		return (1);
	else
		return (0);
}

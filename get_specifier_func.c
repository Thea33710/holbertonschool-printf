#include "main.h"
#include <stddef.h>

/**
 * get_specifier_func - recupere le type d'un variable
 * @c: le caractere qui determine le type d'une variable
 * Return: la fonction associee au type d'une variable ou NULL
 */

int (*get_specifier_func(char c))(va_list *)
{
	spe_t spec[] = {
	{ 's', _string },
	{ 'c', _char },
	{ '%', _percentage },
	{ '\0', NULL }
	};

	int i = 0;

	while (spec[i].specifier != '\0')
	{
		if (spec[i].specifier == c)
		{
			return (spec[i].f);
		}
		i++;
	}

	return (NULL);
}

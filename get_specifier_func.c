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
  {'c', _char},
  {'s', _string},
  {'%', _percentage},
	{'d', _int},
	{'i', _int},
  {'\0', NULL}
};

int i = 0;

/*Boucle tant qu'on n'est pas a la fin du tableau*/

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

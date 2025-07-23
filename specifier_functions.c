#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * _string - affiche une chaine de caractere
 * @args: Liste d'arguments contenant la chaine a afficher
 * Return: La longueur de la chaine affichee
 */

int _string(va_list *args)
{
	char *s = va_arg(*args, char*);
	int i = 0;

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[i] != '\0')
	{
		i++;
	}

	write(1, s, i);
	return (i);
}

/**
 * _char - affiche un caractere
 * @args: Liste d'arguments contenant la chaine a afficher
 * Return: La longueur de la chaine affichee
 */

int _char(va_list *args)
{
	char c = va_arg(*args, int);

	write(1, &c, 1);
	return (1);
}

/**
 * _percentage - affiche un %
 * @args: Liste d'arguments contenant la chaine a afficher
 * Return: La longueur de la chaine affichee
 */

int _percentage(va_list *args __attribute__((unused)))
{
	char c = '%';

	write(1, &c, 1);
	return (1);
}

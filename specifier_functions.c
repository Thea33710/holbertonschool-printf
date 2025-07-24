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

/**
 * _int - affiche un entier en base 10
 * @args: Liste d'arguments contenant la chaine a afficher
 * Return: La longueur de la chaine affichee
 */

int _int(va_list *args)
{
	int y = va_arg(*args, int);
	int i = 0, j, k = 0;
	char s[12], c, minus;
	unsigned int l;

	if (y == 0)
	{
		c = '0';
		write(1, &c, 1);
		return (1);
	}

	if (y < 0)
	{
		minus = '-';
		write(1, &minus, 1);
		k++;
		l = -y;
	}
	else
		l = y;

	while (l > 0)
	{
		s[i] = (l % 10) + '0';
		l = l / 10;
		i++;
	}

	for (j = (i - 1); j >= 0; j--)
	{
		write(1, &s[j], 1);
		k++;
	}

	return (k);
}

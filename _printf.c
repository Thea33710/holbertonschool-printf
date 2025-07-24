#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_valid - Affiche dans la sortie standard les arguments donnes
 * @c: le caractere a verifier
 * Return: si le caractere est valide ou pas
 */

int is_valid(char c)
{
	return (c == 'c' || c == 's' || c == '%' || c == 'd' || c == 'i');
}

/**
 * _printf - Affiche dans la sortie standard les arguments donnes
 * @format: chaine de caracteres composee d'aucune ou plusieurs directive(s)
 * Return: le nombre total de caracteres imprimes
 */

int _printf(const char *format, ...)
{
	va_list args;
	int nb_char_printed = 0, nb_char = 0, i, j = 0;

	va_start(args, format);
	if (format[0] == '\0')
		return (0);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			write(1, &format[j], nb_char);
			if (is_valid(format[i + 1]))
				nb_char_printed += get_specifier_func(format[i + 1])(&args);

			else
			{
				write(1, "%", 1);
				write(1, &format[i + 1], 1);
				nb_char_printed += nb_char + 2;
			}
			i++;
			j = i + 1;
			nb_char = 0;
		}
		else
		{
			nb_char_printed++;
			nb_char++;
		}
	}
	write(1, &format[j], nb_char);
	va_end(args);
	return (nb_char_printed);
}

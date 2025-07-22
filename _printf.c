#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

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

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			write(1, &format[j], nb_char);
			nb_char_printed += get_specifier_func(format[i])(&args);
			j = i + 1;
			nb_char = 0;
		}

		nb_char_printed++;
		nb_char++;
	}

	write(1, &format[j], nb_char);
	va_end(args);
	return (nb_char_printed);
}

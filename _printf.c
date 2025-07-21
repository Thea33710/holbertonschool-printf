#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - donne la taille d'une chaine de caracteres
 * @c: chaine de caractere
 * Return: la taille de la chaine de caracteres
 */

int _strlen(char *c)
{
int i = 0;
while (*c != '\0')
{
c++;
i++;
}
return (i);
}

/**
 * _printf - Affiche dans la sortie standard les arguments donnes
 * @format: chaine de caracteres composee d'aucune ou plusieurs directive(s)
 * Return: le nombre total de caracteres imprimes
 */

 int _printf(const char *format, ...)
 {
	va_list args;
	int nb_char_printed = 0, nb_char = 0, nb_arg = 2, i, j = 0;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			write(1, &format[j], nb_char);
//			get_specifier_func(format[i])(va_arg(args, format[nb_arg]));
//			nb_char_printed += (_strlen(format[nb_arg]) - 1);
			j = i + 1;
			nb_arg++;
			nb_char = 0;
		}

		nb_char_printed++;
		nb_char++;
	}

	write(1, &format[j], (nb_char + 1));
	va_end(args);
	return (nb_char_printed);
 }

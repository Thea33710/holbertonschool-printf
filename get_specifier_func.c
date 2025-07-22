#include "main.h"

/*
* get_specifier_func - retrouver la bonne fonction a appeler
* @c: caractere qui determine le type d'une variable
* Return: la fonction associee au type d'une variable ou NULL
*/

int (*get_specifier_func(char c))(va_list *)
{
  spe_t spec[] = {
  {'c', _char},
  {'s', _string},
  {'%', _percentage},
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

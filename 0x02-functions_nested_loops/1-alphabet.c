#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - print_alphabets
 *
 */

void print_alphabet(void)
{
	char al;

	al = 'a';
	while (al <= 'z')
	{
		_putchar(al);
		al++;

	}
	_putchar('\n');

}


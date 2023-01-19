#include <stdio.h>
#include "holberton.h"
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_name("Bob", print_name);
        printf("\n");
    return (0);
}

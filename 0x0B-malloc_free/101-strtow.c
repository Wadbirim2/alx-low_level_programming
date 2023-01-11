#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_str - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_str(char **str)
{
    int i;

    for (i = 0; str[i] != NULL; ++i)
    {
        printf("%s\n", str[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **strtow(char *str);

    str = strtow("      ALX School         #cisfun      ");
    if (str == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_str(str);
    return (0);
}

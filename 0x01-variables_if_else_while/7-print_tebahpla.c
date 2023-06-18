#include <stdio.h>

/**
 * main - Prints the numbers since 0 to 9
 *
 * Return: Always (Success)
 */
 int main (void)
{
     char letter;

     for(letter = 'z'; letter >= 'a'; letter-- )

        putchar(letter);

     putchar('\n');

    return(0);
}


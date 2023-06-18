#include <stdio.h>
/**
 * main - Prints the alphabetic
 *
 * Return: Always (Success)
 */

int main (void){

char letter;

for(letter = 'a' ; letter <= 'z'; letter++ )
{
    if(letter <= 'z'){

    putchar(letter);
    putchar('\n');
}
}
return(0);
}


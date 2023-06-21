#include "main.h"
/**
* main - prints the alphabet, in lowercase
*
* Return : Always 0 (Success)
**/
void print_alphabet(void){

int  letter;

for(letter = 'a'; letter <= 'z'; letter++)
{

	_putchar(letter);
}
        _putchar('\n');

return(0);
}

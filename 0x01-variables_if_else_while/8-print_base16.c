#include <stdio.h>

/**
  * main - Prints a hexadecimal string
  *
  * Return: Always (Success)
  */
int main (void)
{

   char Letter;

   int Num;

   for( Num = '0' ; Num <= '9' ; Num++ )
    {
        putchar(Num);
    }

    for( Letter = 'a' ; Letter <= 'f' ; Letter++ )
     {  
        putchar(Letter);
     }

putchar('\n');

 return(0);
}


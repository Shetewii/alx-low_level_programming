/*
*File 7-print_tebahpla.c
*Auth: Brennan D Barban
*
*/
#include <stdio.h>
 
 /**
  * main - Prints the lowecase alpabet in revers.
  * 
  * ruturn :Always 0 .
  */
 
int main () {
   char ch;

   for(ch = 'z' ; ch >='a' ; ch--) {
      putchar(ch);
   }
   putchar("\n");
   
   return(0);
}

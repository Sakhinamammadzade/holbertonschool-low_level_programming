#include "main.h"
/**
* print_numbers - function that prints the numbers from 0-9
* Return: 1 if digit and 0 if anything else
*/

void print_numbers(void){
char  c;
for(c = 0; c <= 9; c++)
_putchar(c + '0');	
_putchar('\n');

}

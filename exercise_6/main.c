#include <stdio.h>
#include <stdlib.h>

/*

Portuguese: Faça um programa que imprima na tela todos os múltiplos de 7 entre 1 e 9999.\

English: Write a program that prints all multiples of 7 between 1 and 9999 on the screen.

*/

int main()
{
    int i;

    for(i = 7; i <= 9999; i+=7)
        printf("%4d ", i);
    return 0;
}

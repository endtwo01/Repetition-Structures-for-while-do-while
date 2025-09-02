#include <stdio.h>
#include <stdlib.h>

/*
Portuguese:  Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.

English: the sum of the unmatched numbers between 1 and 1000 is:
*/

int main()
{
    int i, sum = 0;

    for(i = 1; i <= 1000; i++)
        if(i % 2 == 1)
            sum += i;



    printf("sum of odd numbers from 1 to 1000: %d\n\n", sum);
    return 0;

}

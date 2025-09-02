#include <stdio.h>
#include <stdlib.h>

/*

        Portuguese:
                    Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
                    Restrição:
                    → O bloco de repetição deve executar no máximo 500 vezes.

        English: Write a program that adds up the odd numbers between 1 and 1000 and prints the answer.
                Restriction:
                → The repeat block must execute a maximum of 500 times.

*/

int main()
{
    int i, sum = 0;

    for(i =1; i <= 1000; i+=2){
        sum += i;
        printf("%3d ", i);
    }

    printf("sum of the odd numbers of 1 a 1000: %d\n\n", sum);

    return 0;
}

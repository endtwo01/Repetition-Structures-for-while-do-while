#include <stdio.h>
#include <stdlib.h>

/*

Portuguese: Faça um programa que calcule o valor de A, dado por:
            A = 1 + 2 + 3 + 4 + … + n, onde n é um número inteiro, maior que zero informado pelo usuário.

English: Make a program that calculates the value of A, given by:
         A = 1 + 2 + 3 + 4 + ... + n, where n is an integer, greater than zero entered by the user.
*/

int main()
{
    int i, n , A = 0;

    do{
        printf("Enter the value of n: ");
        scanf("%d", &n);
    }while(n < 1);

    for(i = 1; i <= n; i++)
        A =  A + i;

    printf("Sum from 1 to %d: %d\n\n", n, A);

    return 0;
}

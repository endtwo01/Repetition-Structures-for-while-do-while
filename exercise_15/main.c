#include <stdio.h>
#include <stdlib.h>

/*

Portuguese: Faça um programa que peça ao usuário dois números inteiros e apresente o resultado na
multiplicação entre os dois números sem utilizar a operação de multiplicação.

English: Make a program that asks the user for two integers and displays the result at
multiplication between the two numbers without using the multiplication operation.

*/

int main()
{
    int i, a, b, r = 0;

    printf("Enter two values: ");
    scanf("%d%d", &a, &b);

    for(i = 1; i <= a; i++)
        r += b;
    printf("%d * %d = %d\n\n", a, b, r);
    return 0;
}

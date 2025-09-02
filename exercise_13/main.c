#include <stdio.h>
#include <stdlib.h>

/*

Portuguese: Faça um programa que peça ao usuário um número inteiro maior que 2 e diga se o número
            informado é primo ou não.

English: Make a program that asks the user for an integer greater than 2 and tells whether the number
         is prime or not.
*/

int main()
{
    int value, i, div = 0, option;
    do
    {
        do
        {
            printf("enter a value greater than 1: ");
            scanf("%d", &value);
        }
        while(value < 2);
        printf("Divisors of %d: ", value);
        for(i = 2; i < value; i++)
        {
            if(value % i == 0)
            {
                printf("%d ", i);
                div++;

            }
        }
        printf("\n");

        if(div > 2)
            printf("%d not is prime number\n", value);
        else
            printf("%d is prime number\n", value);
        printf("\n1 - Enter other value\n2 - Exit\n");
        scanf("%d", &option);
    }while(option != 2);
    return 0;
}

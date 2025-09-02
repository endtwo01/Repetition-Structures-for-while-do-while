#include <stdio.h>
#include <stdlib.h>

/*

Portuguese: Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N,
            inclusive N, se for o caso.

English: Read an integer value N. Display the square of each even value from 1 to N,
         including N, if applicable.

*/

int main()
{
    int i, n;

    printf("enter an integer value: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i+= 2)
        printf("%d ", i * i);
    printf("\n\n");
    return 0;
}

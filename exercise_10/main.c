#include <stdio.h>
#include <stdlib.h>

/*

Portuguese: Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1
            centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
            dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30 dias.


English: You've decided to get rich by putting money away for 30 consecutive days. To do this, you decided to save 1
         cent on the first day, 2 cents on the second day, 4 cents on the third day, 8 cents on the fourth
         day, and so on. Make a program to calculate how much you will have at the end of the 30 days.

*/

int main()
{
    int i, InitialValue = 1, FinalValue = 1;

    for(i = 1; i <= 29; i++){
        InitialValue = InitialValue * 2;
        FinalValue += InitialValue;
    }

    printf("Vulue in cents: %d\n", FinalValue);
    printf("R$%.2f\n\n", FinalValue / 100.0);

    return 0;
}

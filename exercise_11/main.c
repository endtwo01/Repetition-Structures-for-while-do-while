#include <stdio.h>
#include <stdlib.h>

/*

Portuguese: Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a
            massa inicial, em gramas, faça um programa que determine o tempo necessário para que essa massa
            se torne menor que 0,05 gramas.

English: A certain radioactive material loses half its mass every 50 seconds. Given the initial mass
         , in grams, make a program that determines the time required for this mass
         to become less than 0.05 grams.

*/

int main()
{
    float mass;
    int time = 0;

    printf("Enter the mass of the material in grams: ");
    scanf("%f", &mass);

    while(mass >= 0.05){
        mass = mass / 2;
        time += 50;

    }

    printf("Final Mass: %f\n", mass);
    printf("The elapsed time is %d seconds.\n\n", time);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*

Potuguese: Para uma turma de 45 alunos, construa um algoritmo que determine:
           a) A idade média dos alunos com menos de 1,70m de altura;
           b) A altura média dos alunos com mais de 20 anos.

English: For a class of 45 students, build an algorithm to determine:
         a) The average age of students under 1.70m tall;
         b) The average height of students over 20 years old.
*/


int main()
{
    int i, age, agelow = 0, quantAgeLow = 0, quantHeightLarger20 = 0;
    float ageMedia, heightMedia, height, heightLarger20 = 0;

    for(i = 1; i <= 4; i++)
    {
        printf("Enter your age and height in meters: ");
        scanf("%d%f", &age, &height);

        if(height < 1.7)
        {
            agelow += age;
            quantAgeLow++;
        }

        if(age > 20)
        {
            heightLarger20 += height;
            quantHeightLarger20++;
        }
    }

    ageMedia = (float)agelow / quantAgeLow;
    heightMedia = heightLarger20 / quantHeightLarger20;
    printf("average age of students under 1.70m tall: %.2f\n", ageMedia);
    printf("average height of students under 1.70m tall: %.2f\n", heightMedia);
    return 0;
}

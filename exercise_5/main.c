#include <stdio.h>
#include <stdlib.h>

/*

Portuguese: Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e
            imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida deve
            pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.

English: Write a program that reads the grades for a student's two exams. Calculate and
         print the semester average. Make sure the program only accepts valid grades (a valid grade must
         be between 0 and 10). Each grade must be validated separately.
*/

int main()
{
    float note1, note2, media;

    do{
        printf("Enter the first note: ");
        scanf("%f", &note1);
    }while(note1 < 0 || note1 > 10);

    do{
        printf("Enter the second note: ");
        scanf("%f", &note2);
    }while(note2 < 0 || note2 > 10);

    media = (note1 + note2) / 2;

    printf("Final Note: %.2f\n", media);

    return 0;
}

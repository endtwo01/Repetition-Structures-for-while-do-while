#include <stdio.h>
#include <stdlib.h>

/*

Portuguese: Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
            um menu ao usuário da seguinte forma:

1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
0 – Sair

Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case. Após a
escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida.
Se a operação escolhida for a 4 o dividendo não pode ser zero, um novo valor deve ser solicitado. O
programa deve funcionar até que o usuário escolha a opção 0 (opção de saída).

English: Write a program in C that functions as a calculator. The program should present
         the user with a menu as follows:

1 – Add
2 – Subtract
3 – Multiply
4 – Divide
0 – Exit

A switch structure must be used to perform each operation in a case. After
choosing the operation, two values must be requested from the user to perform the chosen operation.
If the chosen operation is 4, the dividend cannot be zero; a new value must be requested. The
program must run until the user chooses option 0 (exit option).

*/

int main()
{
    int option, num1, num2;

    do{
        printf("\n1 - Add\n2 - Subtract\n3 - Multiply\n4 - Divide\n0 - Exit\n\nEnter the number: ");
        scanf("%d", &option);

        if(option > 0 && option < 5){
            printf("Enter the two values: ");
            scanf("%d%d", &num1, &num2);
        }
        switch(option){
        case 0:
            printf("\nExit...\n");
            break;
        case 1:
            printf("\nAdd: %d\n", num1 + num2);
            break;
        case 2:
            printf("\nSubtract: %d\n", num1 - num2);
            break;
        case 3:
            printf("\nMultiply: %d\n", num1 * num2);
            break;
        case 4:
            while(num2 == 0){
                printf("division by zero is not possible!\nplease enter another value: ");
                scanf("%d", &num2);
            }
            printf("\nDivide: %d\n", num1 / num2);
            break;
        default:
            printf("Option Invalid.\nEnter other option: ");
        }
    }while(option != 0);

    return 0;
}

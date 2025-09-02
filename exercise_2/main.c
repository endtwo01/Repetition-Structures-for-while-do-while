#include <stdio.h>
#include <stdlib.h>

/*

Portuguese:  Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura
            de senha incorreta informada, escrever a mensagem “Senha Invalida”. Quando a senha for
            informada corretamente deve ser impressa a mensagem “Acesso Permitido” e o programa deve ser
            encerrado. Considere que a senha correta é o valor 123456.

English:  Write a program that repeats reading a password until it is valid. For each incorrect password entered,
          write the message “Invalid Password.” When the password is entered correctly,
          the message “Access Granted” should be printed and the program should be
          terminated. Consider that the correct password is the value 123456.

*/

int main()
{
    int password;

    printf("Enter the Password: ");
    scanf("%d", &password);

    while(password != 123456) {
        printf("\nInvalid Password -> Enter Again: ");
        scanf("%d", &password);

    }

    printf("\n\tAcess Allowed!!!\n");

    return 0;
}

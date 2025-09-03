#include <stdio.h>
#include <stdlib.h>
/*

Portuguese: Faça um programa para encontrar o menor número inteiro que seja divisível por todos os
números inteiros entre 1 e 10.

English: Make a program to find the smallest integer that is divisible by all integers between 1 and 10.

*/
int calculateMDC(int a, int b){
    while(b != 0){
        int temp = b;
        b =  a % b;
        a = temp;
    }
    return a;
}

int calculateMMC(int a, int b){
    return (a * b) / calculateMDC(a, b);
}

int main(){

    int num = 1;
    printf("calculating the smallest number divisible by all numbers from 1 to 10..\n");

    for(int i = 2; i <= 10; i++){
        num = calculateMMC(num, i);
    }
    printf("the smallest number divisible by all the numbers from 1 to 10 is: %d\n", num);

    for(int i = 1; i <= 10; i++){
        printf("%d / %d = %d (rest %d)\n", num, i, num / i, num % i);
    }

    return 0;

}




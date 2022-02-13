//
// Created by Vitor Frango on 11/02/2022.
//

// le numero e imprime o antecessor e sucessor

#include<stdio.h>

int main () {


    int num, sucessor, antecessor;

    printf("Escreva um numero inteiro: \n ");
    scanf("%d",&num ) ;

    sucessor = num + 1;
    antecessor = num - 1;

    printf("O sucessor é: %d \n", sucessor);
    printf("O antecessor é: %d \n", antecessor);
    



    return 0;
}
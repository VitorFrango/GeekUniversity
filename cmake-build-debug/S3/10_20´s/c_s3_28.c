//
// Created by Vitor Frango on 11/02/2022.
//

// ler 3 valores e apresentar a soma dos quadrados dos valores lidos

#include<stdio.h>

int main () {

    int n1, n2, n3, res;

    printf ("Escreva 3 numeros inteiros ");
    scanf ("%d%d%d", &n1, &n2, &n3);

    res = (n1*n1)+(n2*n2)+(n3*n3);

    printf("A soma dos quadrados é: %d", res);

    return 0;
}
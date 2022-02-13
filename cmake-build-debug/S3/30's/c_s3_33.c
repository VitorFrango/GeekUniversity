//
// Created by Vitor Frango on 12/02/2022.
//

// lê o lado do quadrado e imprime a sua arwa

#include <stdio.h>

int main () {

    int lado, area;

    printf ("Escreva o lado do quadrado: \n");
    scanf ("%d", &lado);

    area = lado * lado;

    printf ("A area do quadrado é: %d \n", area);

    return 0;
}
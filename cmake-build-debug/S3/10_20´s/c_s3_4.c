//
// Created by Vitor Frango on 02/02/2022.
//

#include <stdio.h>

int main (){

    int num, quadrado;

    printf ("Escreva um numero ");
    scanf( "%d", &num);

    quadrado = num * num;

    printf ("O quadrado do numero que escreveu é %d", quadrado);

    return 0;
}
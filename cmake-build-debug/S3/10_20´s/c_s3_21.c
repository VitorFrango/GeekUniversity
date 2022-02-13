//
// Created by Vitor Frango on 06/02/2022.
//

// escreve o valor da massa em libras e converte para kgs

#include <stdio.h>

 main () {

    double l, k;

    printf (" Escreva o valor da massa em libras: \n");
    scanf ("%d", &l);

    k = l * 0.45;

    printf (" o valor em Kgs é %d ", k);

    return 0;
}
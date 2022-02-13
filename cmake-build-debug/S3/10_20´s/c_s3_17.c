//
// Created by Vitor Frango on 02/02/2022.
//

#include <stdio.h>

int main () {

    // introduz valor em centimetors de converte me polegadas

    float c, p;
    printf ("Escreva o valor em centimetros \n ");
    scanf ("%f", &c);

    p = c /  2.54;

    printf ("O valor em polegadas é %f", p);

    return 0;
}
//
// Created by Vitor Frango on 02/02/2022.
//

#include <stdio.h>

int main () {

    float k, m;

    printf ("Escreva a velocidade em Km/h \n ");
    scanf ("%f",  &k);

    m = k / 3.6;

    printf ("A velocdade em milhas é %.2f", m);
    return 0;
}
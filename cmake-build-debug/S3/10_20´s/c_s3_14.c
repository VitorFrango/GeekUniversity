//
// Created by Vitor Frango on 02/02/2022.
//

#include <stdio.h>
#define M_PI 3.14159265358979323846 // Define o valor para PI

int main () {


    float g, r;

    printf("Escreva os graus do angulo \n");
    scanf ("%f", &g);

    r = g * M_PI/180;

    printf ("O angulo em radianos é %f \n", r);

    return 0;
}
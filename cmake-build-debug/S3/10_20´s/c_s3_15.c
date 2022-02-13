//
// Created by Vitor Frango on 02/02/2022.
//

#include<stdio.h>
# define M_PI 3.14159265358979323846


int main () {

    float r, g;

    printf ("Escreva o angulo em radianos \n");
    scanf ("%f", &r);

    g = r * 180 / M_PI;

    printf (" O angulo em graus é %f ", g);

    return 0;
}
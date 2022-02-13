//
// Created by Vitor Frango on 12/02/2022.
//

// calcual a area do circulo   area = pi * raio2

#include <stdio.h>
#define M_PI 3.141592  // define o valor de pi


int main () {

    float raio, area;

    printf ("Qual o valor do raio: \n");
    scanf ("%f", &raio);

    area = M_PI * (raio * raio);
    printf (" A area do circulo é: %.2f", area);

    return 0;
}




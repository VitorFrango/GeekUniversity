//
// Created by Vitor Frango on 12/02/2022.
//

// calcula o volume do cilindro

#include <stdio.h>
#include <math.h>
#define M_PI 3.141592

int main () {

    float altura, raio, raio_quad, vol;

    printf("Escreva a altura do cilindro: \n");
    scanf("%f", &altura);

    printf("Escreva o raio do cilindro: \n");
    scanf("%f", &raio);

    raio_quad = raio * raio;
    vol = M_PI * raio_quad * altura;

    printf("O volume do cilindro é: %.2f", vol);



    return 0;
}
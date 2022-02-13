//
// Created by Vitor Frango on 02/02/2022.
//

#include<stdio.h>

int main () {


    float c, f;
    printf (" Escreva a tempetarura em graus Farenheit \n ");
    scanf ("%f", &f);

        c = 5.0*(f-32.0)/9.0;
    printf ("A temperatura em celsius é %f", c);


    return 0;
}
//
// Created by Vitor Frango on 02/02/2022.
//

#include <stdio.h>

int main () {


    float cel, far;

    printf("Escreva a temperatura em graus Celsius \n");
    scanf("%f",&cel);

        far = cel*(9.0/5.0)+32;

    printf ("A temperatura em Far é %f ",far);

    return 0;
}
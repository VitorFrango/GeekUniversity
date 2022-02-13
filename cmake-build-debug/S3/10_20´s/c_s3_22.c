//
// Created by Vitor Frango on 06/02/2022.
//

// le o valor em jardas e converte me metros


#include <stdio.h>
int main(void) {

    float j, m;

    printf (" Escreva o valor me jardas: \n");
    scanf ("%f", &j);

    m = 0.91 * j;
    printf ("o valor em jardas é: %f ", m);
    return 0;
}
//
// Created by Vitor Frango on 06/02/2022.
//

// converte m3 em litros

#include <stdio.h>

int main () {

    float m, l;

   printf (" Esvreva o valor em metros cubicos  \n");
   scanf ("%f", &m);

   l = 1000 * m;

   printf ("  O valor em litros é %.2f", l);
    return 0;
}
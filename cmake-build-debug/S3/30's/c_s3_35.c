//
// Created by Vitor Frango on 12/02/2022.
//

// caclular o valor da hiptenusa atraves dos catetos

#include <stdio.h>
#include <math.h>

int main () {


    float cat_a, cat_b, hipotenusa, quadrado_a, quadrado_b;

    printf ("Escreva o cateto A: \n");
    scanf ("%f", &cat_a);

    printf ("Escreva o cateto B: \n");
    scanf ("%f", &cat_b);

    quadrado_a = cat_a * cat_a;
    quadrado_b = cat_b * cat_b;

    hipotenusa = sqrt (quadrado_a + quadrado_b);

    printf ("O valor da hipotenusa é: %f \n", hipotenusa);
    return 0;
}
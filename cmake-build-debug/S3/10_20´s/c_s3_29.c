//
// Created by Vitor Frango on 11/02/2022.
//

// calacula a media aritmetica de notas

#include <stdio.h>
int main () {

    float n1, n2, n3, n4, res;

    printf ("Escreva a 1 nota \n");
    scanf ("%f", &n1);

    printf ("Escreva a 2 nota \n");
    scanf ("%f", &n2);

    printf ("Escreva a 3 nota \n");
    scanf ("%f", &n3);

    printf ("Escreva a 4 nota \n");
    scanf ("%f", &n4);

    res = (n1+n2+n3+n4)/4;

    printf ("A media é; %.2f", res); // %.2f equivale a 2 casas decimais
    return 0;
}

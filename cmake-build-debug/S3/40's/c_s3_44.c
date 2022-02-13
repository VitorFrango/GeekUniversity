//
// Created by Vitor Frango on 13/02/2022.
//

#include <stdio.h>

int main () {

    int degrau, altura, tamanho ;

    printf ("Qual a altura do degrau? \n");
    scanf ("%d", &degrau);

    printf ("Que altura pretende alcançar? \n");
    scanf("%d", &altura);

    tamanho = degrau * altura;

    printf (" Irá precisar de um escadote com %d degraus", tamanho);
    return 0;
}
//
// Created by Vitor Frango on 13/02/2022.
//

#include <stdio.h>

int main () {

    int h, m, s, duracao;

    printf (" Intoduzao hora minuto e segundos do inicio da atividade \n");
    scanf ("%d%d%d", &h, &m, &s);
    printf (" A actividade iniciou-se as %d horas %d minutos e %d segunods: ", h, m, s);

    printf ("Quantos segundos durou a atividade?");
    scanf ("%d", &duracao);

    return 0;
}
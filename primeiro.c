//
// Created by Vitor Frango on 21/01/2022.
//


#include<stdio.h>

int main ()

{
    char inicial;
    int idade;
    float altura;

    printf ("Ola Mundo! \n");

    printf ("Insira  a primeira letra do seu nome: \n");
    scanf ("%c", &inicial);

    printf ("Insira a sua idade: \n");
    scanf ("%d", &idade);

    printf ("Insira a sua altura: \n");
    scanf ("%f ", &altura);

    printf ("\n\n Dados: ");
    printf ("\n A sua inicial e: %c", inicial);
    printf ("\n A sua idade e: %d", idade);
    printf ("\n A sua altura e: %.2f", altura);

    return 0;
}
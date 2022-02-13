//
// Created by Vitor Frango on 11/02/2022.
//

// le um real e a cotação do dolar . omprime o vakor em dolares

#include <stdio.h>

int main () {


    float valor, cotacao, result;

    printf ("Escreva um valor: \n");
    scanf ("%f", &valor);

    printf ("Qual o valor do Dólar: \n");
    scanf ("%f", &cotacao);

    result = valor * cotacao;

    printf ("São %.2f Dólares:\n", result);



    return 0;
}
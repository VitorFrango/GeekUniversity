//
// Created by Vitor Frango on 12/02/2022.
//

// ucalcula o desconto de 12%


#include <stdio.h>


int main () {


    float valor, desconto;

    printf ("Qual o valor do produto?: \n");
    scanf("%f", &valor);

    desconto = (valor -(valor * 0.12)) ;

    printf ("O valor final apos desconto é: %f", desconto);

    return 0;
}
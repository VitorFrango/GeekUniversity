//
// Created by Vitor Frango on 11/02/2022.
//

// le numero e imprime a soma do sucessor do seu triplo com o anecessor do seu dobro


#include <stdio.h>

int main () {


    int num, antecessor, sucessor, parc1, parc2, total ;

    printf ("Escreva o numero: \n ");
    scanf ("%d", &num);

    sucessor = num + 1;
    antecessor = num - 1;

    parc1 = sucessor *3;
    parc2 = antecessor * 2;

    total = sucessor + antecessor;

    printf ("soma do sucessor do seu triplo com o anecessor do seu dobro é: %d", total);



    return 0;
}
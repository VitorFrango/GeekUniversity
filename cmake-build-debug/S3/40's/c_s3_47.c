//
// Created by Vitor Frango on 13/02/2022.
//

#include <stdio.h>

int main () {

    int num, milh, cent, dez, unid, temp, temp1, temp2;

    printf ("Escreva um numero com 4 digitos entre 1000 e 9999 \n " );
    scanf (" %d", &num);

    milh = num / 1000;
    temp = num % 1000;
    cent = temp / 100;
    temp1 = temp % 100;
    dez = temp1 / 10;
    unid = temp1 % 10;


    printf("%d \n", milh);
    printf("%d \n" , cent);
    printf("%d \n"  , dez);
    printf("%d \n"  , unid);


    return 0;
}
//
// Created by Vitor Frango on 13/02/2022.
//

#include <stdio.h>

int main () {

    int num, cent, dez, uni, temp_dez, temp_uni;

    printf("Escreva um numero entre 100 e 999: \n");
    scanf("%d", &num);

    cent = num / 100;
    printf("centenas %d \n" , cent);

    temp_dez = num % 100;
    dez = temp_dez / 10;
    printf("dezenas %d \n", dez);

    temp_uni = temp_dez % 10;
    printf("unidades %d \n", temp_uni);

    printf("O numenro %d invertido é %d%d%d", num, temp_uni,dez,cent);
    return 0;
}
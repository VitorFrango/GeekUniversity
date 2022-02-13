//
// Created by Vitor Frango on 12/02/2022.
//

#include <stdio.h>

int main () {

    int sal_base, gratificaao, imposto, sal_liq;

    printf (" Qual o seu salario base? \n");
    scanf (" %d", &sal_base);

    imposto = sal_base * 0.07;
    gratificaao = sal_base * 0.05;

    sal_liq = sal_base + gratificaao - imposto;

    printf ("O seu salario liquido  é: %d", sal_liq);



    return 0;
}
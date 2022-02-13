//
// Created by Vitor Frango on 12/02/2022.
//

#include <stdio.h>

int main () {

    int va_hora, hor_trab, va_bruto, premio, va_liq;

    printf ("Qual o valor hora do salario? \n");
    scanf ("%d", &va_hora);

    printf ("quantas horas trabalhou? \n");
    scanf ("%d", &hor_trab);

    va_bruto = va_hora * hor_trab;
    premio = va_bruto * 0.10;
    va_liq = va_bruto + premio;

    printf ("O salario bruto é %d$, o valor do premio é %d$ e o salario liqido %d$ \n", va_bruto, premio, va_liq);


    return 0;
}
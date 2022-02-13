//
// Created by Vitor Frango on 12/02/2022.
//

// calculo dos dias e trabalho e descontos

#include <stdio.h>

int main () {

    const float vadia = 30;
    int dias;
    float va_liq, desconto, va_bruto;

    printf ("Quantos dias trabalhou o funcionario: \n ");
    scanf ("%d", &dias);

    va_bruto = dias * vadia;
    desconto = va_bruto * 0.08;
    va_liq = va_bruto - desconto;


    printf ("O valor liquido é: %.2f$ , o valor a descontar é %.2f$ e o valor a receber é %.2f$",va_bruto, desconto, va_liq);



    return 0;
}
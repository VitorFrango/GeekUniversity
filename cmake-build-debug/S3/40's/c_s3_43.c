//
// Created by Vitor Frango on 12/02/2022.
//

#include <stdio.h>

int main () {

    float valor, pag_3,  des_10, com_5_tot, com_5_par;

    printf ("Introduza o valor; \n ");
    scanf ("%f", &valor);

    des_10 = valor - (valor * 0.10);
    printf (" O valor a pagar com 10%% de desconto é: %.2f€ \n", des_10);

    pag_3 = valor / 3;
    printf (" O pagamento parcelado 3 vezes sem juros é: %.2f€ \n", pag_3);

    com_5_tot = des_10 * 0.05;
    printf (" O valor da comissão do vendedor sobre a venda à vista é de: %.2f \n ", com_5_tot);

    com_5_par = valor * 0.05;
    printf (" O valor da comissão do vendedor sobre a venda parcelada é de: %.2f \n ", com_5_par);

    return 0;
}
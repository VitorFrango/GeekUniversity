//
// Created by Vitor Frango on 12/02/2022.
//

// calcula aumento de salario

#include <stdio.h>

int main () {

    float sal, novo_sal;

    printf("Qual o salario? \n ");
    scanf("%f", &sal);

    novo_sal = sal + (sal *0.25);

    printf ("O novo salario é: %.2f", novo_sal);
    return 0;
}
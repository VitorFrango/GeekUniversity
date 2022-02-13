//
// Created by Vitor Frango on 13/02/2022.
//

// converte letra maiuscula me minuscula

#include <stdio.h>
#include <ctype.h>

int main() {
    char min;
    printf("Informe um caractere minúsculo: ");
    scanf("%c", &min);

    // Fazendo uso dos valores decimais da tabela ASCII para alterar o tamanho da letra
    char mai = min - 32;
    printf("A letra %c maiúscula é %c", min, mai);

    return 0;
}
//
// Created by Vitor Frango on 12/02/2022.
//

#include <stdio.h>


int main () {

    const long premio = 780000;
    float pri, seg, ter;

    pri = premio * 0.46;
    seg = premio * 0.32;
    ter = premio - pri - seg;

    printf ("o primeiro prenmio é: %.2f \n", pri);
    printf ("o segundo prenmio é: %.2f \n", seg);
    printf ("o terceiro prenmio é: %.2f \n ", ter);




    return 0;
}
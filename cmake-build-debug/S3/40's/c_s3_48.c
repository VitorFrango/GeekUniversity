//
// Created by Vitor Frango on 13/02/2022.
//

#include <stdio.h>

int main () {

   int num, hora, min, segun;

   printf ("Escreva os segundos: \n ");
   scanf ("%d", &num);


    hora = (num /60/60)%24;
    min = (num/60)%60;
    segun = num%60;


   printf ("%d segundos \n", segun);
   printf ("%d minutos \n", min);
   printf ("%d horas \n", hora);

   return 0;
}
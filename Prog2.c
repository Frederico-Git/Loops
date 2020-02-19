#include <stdio.h>
#include <stdlib.h>


int main (void){

    int contar,numero;

    printf("Numero random 0 - 30 \n");

    for (contar = 0; contar <= 20; contar++)
    {
        numero = rand() % 30;
        printf(" %d\n",numero);
    }

    printf("Apresentar os numeros entre 10-20 \n");

    for (contar = 0; contar <= (numero<10-20); contar++)
    {
        numero = rand() % 30;
        printf("Existem %d numeros entre 10 - 20\n",numero);
    }
    
    
return 0;

}
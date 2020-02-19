#include <stdio.h> 
#include <string.h>

int main (void){
    char nome [100];
    int tamanho;

    printf("Qual o nome?\n");
    scanf(" %s",nome);

    tamanho = strlen (nome);

    printf("O %s tem %d letras\n",nome,tamanho);
       
}
#include <stdio.h> 

int num[10];
int maior = num[0] = 0;

int main(void){

    printf("Diga um numero\n");
    scanf(" %d",&num[1]);

    maior = num[1];

    for (int i = 1; i < 10; i++)
    {
        printf("O numero e: %d\n",num[1]);
    }
    if (num[1] >= num[0])
    {
        maior = num[1];
    }

    printf("O maior numero e: %d",maior);
    
       
}
#include<stdio.h>

#define TAM_TEXTO 100

int main(){

    char texto[TAM_TEXTO];
    int i;


    for(i = 0; i < TAM_TEXTO - 1 && ((texto[i] = getchar()) != '\n'); i++);

    texto[i] = '\0';

    for(i = 0; texto[i] != '\0'; i++)
        putchar(texto[i]);
    printf("\n");

    return 0;
}

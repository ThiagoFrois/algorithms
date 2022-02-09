#include <stdio.h>

#define TAM_TEXTO 100
#define IN 1
#define OUT 0

int main(){

    int texto[TAM_TEXTO], nc, np = 0, estado;

    estado = OUT;

    for(nc = 0; nc < TAM_TEXTO && (texto[nc] = getchar()) != EOF; nc++){
        if(texto[nc] == ' ' || texto[nc] == '\t' || texto[nc] == '\n')
            estado = OUT;
        else if(estado == OUT){
            estado = IN;
            np++;
        }
    }

    printf("O número de palavras é %d.\n", np);

    return 0;
}

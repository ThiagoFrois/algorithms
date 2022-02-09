#include <stdio.h>

#define TAM_TEXTO 100

int main(){

    int texto[TAM_TEXTO], i, nc, nl = 0, ntab = 0, nb = 0;

    for(nc = 0; nc < TAM_TEXTO && (texto[nc] = getchar()) != EOF; nc++);
       for(i = 0; texto[i] != EOF; i++){
        if(texto[i] == '\n')
            nl++;
        if(texto[i] == '\t')
            ntab++;
        if(texto[i] == ' ')
            nb++;
    }

    nb = nb + 2*ntab;

    printf("NC = %d, NL = %d, NTAB = %d, NB = %d\n", nc, nl, ntab, nb);

    return 0;
}

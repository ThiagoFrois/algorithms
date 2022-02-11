#include <stdio.h>

#define TAM_ARRANJO 10
#define NAO_EXISTE -1

int busca_binaria(int arranjo[], int e);

int main(){

    int arranjo[TAM_ARRANJO] = {0,1,2,3,4,5,6,7,8,9}, indice, e = 29;

    indice = busca_binaria(arranjo, e);

    if(indice == -1)
        printf("O elemento não está no vetor.\n");
    else
        printf("O elemento %d está na posição %d do vetor.\n", e, indice + 1);
    return 0;
}

int busca_binaria(int arranjo[], int e){
    int inicio = 0, fim = TAM_ARRANJO, meio = (inicio + fim)/2;

    while(arranjo[meio] != e){
        if(meio == TAM_ARRANJO - 1){
            meio = NAO_EXISTE;
            break;
        }
        if(e < arranjo[meio])
            fim = meio - 1;
        else if(e > arranjo[meio])
            inicio = meio + 1;
        meio = (inicio + fim)/2;
    }

    return meio;
}


#include <stdio.h>

#define TAM_ARRANJO 10
#define NAO_EXISTE -1

int busca_binaria(int arranjo[], int e, int inicio, int fim);

int main(){

    int arranjo[TAM_ARRANJO] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, indice, e = 0;

    indice = busca_binaria(arranjo, e, 0, TAM_ARRANJO - 1);

    if(indice == -1)
        printf("O elemento %d não está no arranjo.\n", e);
    else
        printf("O elemento %d está na posição %d do arranjo.\n", e, indice + 1);

    return 0;
}

int busca_binaria(int arranjo[], int e, int inicio, int fim){
    int meio = (inicio + fim)/2;

    if(arranjo[meio] == e)
        return meio;
    else if(inicio >= fim)
        return NAO_EXISTE;
    else{
        if(e < arranjo[meio])
            return busca_binaria(arranjo, e, inicio, meio - 1);
        else if(e > arranjo[meio])
            return busca_binaria(arranjo, e, meio + 1, fim);
    }
}


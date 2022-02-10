#include <stdio.h>

#define TAM_ARRANJO 10
#define SENTINELA 100

void copia_subarranjo(int subarranjo[], int arranjo[], int inicio, int fim);

void merge(int arranjo[], int p, int q, int r);

void merge_sort(int arranjo[], int p, int r);

void print_sort(int arranjo[], int tam);

int main(){

    int arranjo[TAM_ARRANJO] = {54,7,12,43,2,87,6,46,99,3};

    merge_sort(arranjo, 0, TAM_ARRANJO - 1);

    print_sort(arranjo, TAM_ARRANJO);

    return 0;
}

void copia_subarranjo(int subarranjo[], int arranjo[], int inicio, int fim){
    int i, j = 0;
    for(i = inicio; i <= fim; i++){
        subarranjo[j] = arranjo[i];
        j++;
    }
}

void merge(int arranjo[], int p, int q, int r){
    int tam_direita = q - p + 1, tam_esquerda = r - q;
    int arranjo_direito[tam_direita + 1], arranjo_esquerdo[tam_esquerda + 1];
    int i, j, k;

    copia_subarranjo(arranjo_direito, arranjo, p, q);
    copia_subarranjo(arranjo_esquerdo, arranjo, q + 1, r);

    arranjo_direito[tam_direita] = SENTINELA;
    arranjo_esquerdo[tam_esquerda] = SENTINELA;

    i = 0;
    j = 0;

    for(k = p; k <= r; k++){
        if(arranjo_direito[i] < arranjo_esquerdo[j]){
            arranjo[k] = arranjo_direito[i];
            i++;
        }
        else{
            arranjo[k] = arranjo_esquerdo[j];
            j++;
        }
    }
}

void merge_sort(int arranjo[], int p, int r){
    int q;

    if(p < r){
        q = (p + r)/2;
        merge_sort(arranjo, p, q);
        merge_sort(arranjo, q + 1, r);
        merge(arranjo, p, q, r);
    }
}

void print_sort(int arranjo[], int tam){
    for(int i = 0; i < tam; i++)
        if(arranjo[i] != -1)
            printf("%d ", arranjo[i]);
    printf("\n");
}


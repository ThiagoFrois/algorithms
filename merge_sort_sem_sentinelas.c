#include <stdio.h>

#define TAM_ARRANJO 10

void concatena_arranjo(int subarranjo[], int arranjo[], int k, int r, int j);
void copia_subarranjo(int subarranjo[], int arranjo[], int p, int r);
void merge(int arranjo[], int p, int q, int r);
void merge_sort(int arranjo[], int p, int r);
void print_sort(int arranjo[], int tam);

int main(){

    int arranjo[TAM_ARRANJO] = {2,6,4,3,9,7,1,8,0,5};

    merge_sort(arranjo, 0, TAM_ARRANJO - 1);

    print_sort(arranjo, TAM_ARRANJO);

    return 0;
}

void concatena_arranjo(int subarranjo[], int arranjo[], int k, int r, int j){
    for(int i = k; i <= r; i++){
        arranjo[i] = subarranjo[j];
        j++;
    }
}

void copia_subarranjo(int subarranjo[], int arranjo[], int p, int r){
   int j = 0;
   for(int i = p; i <= r; i++){
       subarranjo[j] = arranjo[i];
       j++;
   }
}

void merge(int arranjo[], int p, int q, int r){
    int tamanho_direita = q - p + 1, tamanho_esquerda = r - q;
    int arranjo_direita[tamanho_direita], arranjo_esquerda[tamanho_esquerda];
    int i = 0, j = 0, k;

    copia_subarranjo(arranjo_direita, arranjo, p, q);
    copia_subarranjo(arranjo_esquerda, arranjo, q + 1, r);

    for(k = p; k <= r; k++){
        if(q - p + 1 - i == 0){
            concatena_arranjo(arranjo_esquerda, arranjo, k, r, j);
            break;
        }

        else if(r - q - j == 0){
            concatena_arranjo(arranjo_direita, arranjo, k, r, i);
            break;
        }

        if(arranjo_direita[i] < arranjo_esquerda[j]){
            arranjo[k] = arranjo_direita[i];
            i++;
        }
        else if(arranjo_esquerda[j] < arranjo_direita[i]){
            arranjo[k] = arranjo_esquerda[j];
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
        printf("%d ", arranjo[i]);
    printf("\n");
}

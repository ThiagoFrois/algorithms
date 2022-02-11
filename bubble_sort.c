#include <stdio.h>

#define TAM_ARRANJO 10

void bubble_sort(int arranjo[]);
void print_sort(int arranjo[], int tam);

int main(){

    int arranjo[TAM_ARRANJO] = {4,3,8,2,1,0,9,5,7,6};

    bubble_sort(arranjo);

    print_sort(arranjo, TAM_ARRANJO);

    return 0;
}

void bubble_sort(int arranjo[]){
    int i, j, aux;

    for(i = 0; i < TAM_ARRANJO - 1; i++){
        for(j = 1; j < TAM_ARRANJO; j++){
            if(arranjo[j - 1] > arranjo[j]){
                aux = arranjo[j - 1];
                arranjo[j - 1] = arranjo[j];
                arranjo[j] = aux;
            }
        }
    }
}

void print_sort(int arranjo[], int tam){
    for(int i = 0; i < tam; i++)
        printf("%d ", arranjo[i]);
    printf("\n");
}


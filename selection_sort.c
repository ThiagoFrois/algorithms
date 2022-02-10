#include <stdio.h>

#define TAM_ARRANJO 10

void insertion_sort(int arranjo[]);

void print_sort(int arranjo[]);

int main(){

    int arranjo[TAM_ARRANJO] = {2,7,1,3,4,9,6,8,0,5};

    insertion_sort(arranjo);

    print_sort(arranjo);

    return 0;
}

void insertion_sort(int arranjo[]){
    int i, j, chave, aux;

    for(i = 0; i < TAM_ARRANJO - 1; i++){
        chave = i;
        for(j = i + 1; j < TAM_ARRANJO; j++){
            if(arranjo[j] < arranjo[chave])
                chave = j;
        }
        aux = arranjo[chave];
        arranjo[chave] = arranjo[i];
        arranjo[i] = aux;
    }
}

void print_sort(int arranjo[]){
    for(int i = 0; i < TAM_ARRANJO; i++)
        printf("%d ", arranjo[i]);
    printf("\n");
}

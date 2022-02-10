#include <stdio.h>

#define TAM_ARRANJO 10

void insertion_sort(int arranjo[]);

void print_sort(int arranjo[]);

int main(){

    int arranjo[TAM_ARRANJO] = {6,5,3,1,8,7,2,4,9,0};

    insertion_sort(arranjo);

    print_sort(arranjo);

    return 0;
}

void insertion_sort(int arranjo[]){
    int chave, i, j;
    for(i = 1; i < TAM_ARRANJO; i++){
        chave = arranjo[i];
        j = i - 1;
        while(j >= 0 && arranjo[j] > chave){
            arranjo[j + 1] = arranjo[j];
            j--;
        }
        arranjo[j + 1] = chave;
    }
}

void print_sort(int arranjo[]){

    for(int i = 0; i < TAM_ARRANJO; i++){
        printf("%2d ", arranjo[i]);
    }
    printf("\n");
}

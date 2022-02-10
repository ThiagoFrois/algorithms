#include <stdio.h>

#define TAM_ARRANJO 10
#define NIL 0

int busca_linear(int arranjo[], int num);

int main(){

    int indice, arranjo[TAM_ARRANJO] = {12,5,82,3,54,2,9,3,23,31}, num = 54;

    indice = busca_linear(arranjo, num);

    printf("Está no índice %d do vetor.\n", indice);

    return 0;
}

int busca_linear(int arranjo[], int num){
    int indice = 0, i;
    for(i = 0; i < TAM_ARRANJO; i++){
        if(arranjo[i] == num){
            indice = i;
            break;
        }
    }
    return indice;


}

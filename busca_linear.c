#include <stdio.h>

#define TAM_ARRANJO 10
#define NIL 0

int busca_linear(int arranjo[], int num);

int main(){

    int indice, arranjo[TAM_ARRANJO] = {12,5,82,3,54,2,9,3,23,31}, num = 31;

    indice = busca_linear(arranjo, num);

    if(indice != -1)
        printf("O número %d é o elemento %d do vetor.\n", num, indice + 1);
    else
        printf("O número %d não está no vetor.\n", num);

    return 0;
}

int busca_linear(int arranjo[], int num){
    int indice = -1, i;
    for(i = 0; i < TAM_ARRANJO; i++){
        if(arranjo[i] == num){
            indice = i;
            break;
        }
    }
    return indice;


}

#include <stdio.h>

#define TAM_BINARIOS_EM_BITS 8

void soma_binarios(int arranjo_a[], int arranjo_b[], int soma[]);

void print_soma(int arranjo[]);

int main(){

    int arranjo_a[TAM_BINARIOS_EM_BITS] = {1,1,0,1,0,0,1,0};
    int arranjo_b[TAM_BINARIOS_EM_BITS] = {1,1,0,0,1,1,1,1};
    int soma[TAM_BINARIOS_EM_BITS + 1];

    soma_binarios(arranjo_a, arranjo_b, soma);

    print_soma(soma);

    return 0;
}

void soma_binarios(int arranjo_a[], int arranjo_b[], int soma[]){
    int i, sum, add = 0;

    for(i = TAM_BINARIOS_EM_BITS - 1; i >= 0; i--){
        sum = arranjo_a[i] + arranjo_b[i] + add;
        add = sum/2;
        soma[i + 1] = sum%2;
    }
    soma[i + 1] = add;
}

void print_soma(int arranjo[]){

    for(int i = 0; i < TAM_BINARIOS_EM_BITS + 1; i++)
        printf("%d", arranjo[i]);
    printf("\n");
}

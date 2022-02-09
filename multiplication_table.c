#include<stdio.h>

int main(){

    printf("---------------------- Tabuada 1 até 10--------------------------\n");
    for(int i = 1; i <= 10; i++){
        printf("[%2d] -> ", i);
        for(int j = 1; j <= 10; j++){
            printf("%3d ", i*j);
        }
        printf("\n");
    }

    return 0;
}

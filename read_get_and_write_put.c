#include <stdio.h>

#define TAM_TEXTO 100

int main()
{
    int texto[TAM_TEXTO], i = 0;

    for(i = 0; i < TAM_TEXTO && (texto[i] = getchar()) != EOF; i++);

    for(i = 0; texto[i] != EOF; i++)
        putchar(texto[i]);

    return 0;
}

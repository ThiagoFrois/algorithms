#include <stdio.h>

#define PI 3.14159

int main() {

    double raio, area;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &raio);

    area = PI*raio*raio;

    printf("A = %.4f\n", area);

    return 0;
}

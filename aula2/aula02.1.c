#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float raio, perimetro;
    double pi = 3.1415972, area;

    printf("Digite o raio da circunferencia: ");
    fflush(stdout);
    scanf("%f", &raio);

    area = pi * raio * raio;
    perimetro = 2 * pi * raio;

    printf("Area = %lf\nPerimetro = %f\n", area, perimetro);

    return EXIT_SUCCESS;
}
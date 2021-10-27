/*
============================================== 
Nome: Aula04.c
Autor: Allan Rodrigo e João Vitor Silva Gomes
Dt. Criacao: 24/08/2021
Versao: 0.1
Descricao: Função Bivariada
============================================== 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    float x, y, f;
    x = 0, y = 0, f = 0;
    printf("Insira o valor de x: ");
    scanf("%f", &x);
    printf("\nInsira o valor de y: ");
    scanf("%f", &y);

    while (x < 100 && y <= 0) {
        if ((x >= 0 || x < 100) && (y > -100 || y <= 0)){
            f = pow(x,2) + pow(y,2);
        }
        printf("\nf(%f,%f) = %f\n", x, y, f);
        x += 2.5;
        y += 5;
    }
}



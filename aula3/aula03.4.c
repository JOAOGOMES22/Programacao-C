/*
============================================== 
Nome: Aula03.4c
Autor: Allan Rodrigo e João Vitor Silva Gomes 
Dt. Criacao: 17/08/2021
Versao: 0.1
Descricao: Função Segundo Grau
============================================== 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, b, c;
    float x1, x2;
    float D;

//leitura dos valores de a, b e c
    printf("Insira o valor de a:");
    scanf("%d", &a);
    printf("Insira o valor de b:");
    scanf("%d", &b);
    printf("Insira o valor de c:");
    scanf("%d", &c);

//cálculo do Discriminante (delta)
    D = pow(b,2) - 4ac;

//Diz ao usuário que não há raízes reais pois o delta é igual a 0
    if (D < 0) {
        printf("Não há raízes reias\n");
    }

//Cálculo da raiz positiva
    x1 = (-b + sqrt(D))/(2a);

//Cálculo da raiz negativa
    x2 = (-b - sqrt(D))/(2*a);

//Apresentação do resultado das raízes para o usuário
    printf("Raiz positiva: %f", x1);
    printf("\n");
    printf("Raiz negativa: %f", x2, "\n");
}
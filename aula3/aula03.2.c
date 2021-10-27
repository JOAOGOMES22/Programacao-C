/*
============================================== 
Nome: Aula03c
Autor: Allan Rodrigo e João Vitor Silva Gomes 
Dt. Criacao: 17/08/2021
Versao: 0.1
Descricao: Imprimir ordem crescente e/ou decrescente
============================================== 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, b, c;
    int o, troca;

    printf("Digite os valores de a, b e c.\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    printf("Prefere os valores em ordem crescente (2) ou decrescente (1)?");
    scanf("%d", &o);


    if (o == 1) {
            if (a < b) {
                troca = b;
                b = a; 
                a = troca;
            }
            if (b < c) {
                troca = c; 
                c = b;
                b = troca;
            }
            if(a < b) {
                troca = b;
                b = a;
                a = troca;
            }

    printf("\n%d, %d, %d\n\n", a, b, c);
    }
    else if (o == 2) {
            if(a > b) {
                troca = b;
                b = a; 
                a = troca;
            }
            if(b > c) {
                troca = c; 
                c = b;
                b = troca;
            }
            if(a > b) {
                troca = b;
                b = a;
                a = troca;
            }

    printf("\n%d, %d, %d\n\n", a, b, c);
    }


    if (o != 1 && o != 2) {
        printf("Valor Inválido\n");
    }
    return EXIT_SUCCESS;
}
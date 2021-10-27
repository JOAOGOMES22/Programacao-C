/*
============================================== 
Nome: Aula04.1.c
Autor: Allan Rodrigo e Joao Vitor
Dt. Criacao: 24/08/2021
Versao: 0.1
Descricao: Jogo de adivinhaçao
============================================== 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int r,ct,n;
    srand(time(0));

    ct=0;
    printf("Sao 10 tentaivas para tentar acertar o numero vamos começar! \n");

    printf("Chute um numero entre 0 e 100: \n ");

    r=rand() % 101;

    while (r!=n){
        ct=ct+1;

        scanf("%d", &n);

        if (n>r){
            printf("Valor muito alto \n");
        }
        if (n<r){
            printf("Valor muito baixo\n ");
        }
        if (r==n){
            printf("PARABENS, VOCE E MUITO BOM!");
        }
        if (ct==10){
            n=r;
        }
    }
    return EXIT_SUCCESS;
}
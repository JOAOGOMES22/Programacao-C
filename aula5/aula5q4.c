/*
============================================== 
Nome: Aula05q2.c
Autor: Allan Rodrigo e João Vitor Silva Gomes
Dt. Criacao: 28/09/2021
Versao: 0.1
Descricao: Chute numerico
============================================== 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int sd, d1, d2, n1, sm;
    char r;
    srand(time(0));
    sd=100;
    r='s';

    while (r == 'S' || r == 's'){
        printf("Escolha um numero de 2 a 12\n"); 
        scanf("%d", &n1);

        d1=rand() % 7;
        d2=rand() % 7;
        sm=d1+d2;

        if (n1==sm){
            sd+=10;
            printf("Voce ganhou 10 mereis\n");
        }else{
            sd-=10;
            printf("Voce perdeu 10 mereis\n");	
        }
       
        printf("Voce tem %d pontos\n", sd);

        printf("Deseja continuar? [S/N]\n");
        scanf(" %c", &r);
    }

    if (sd>100){
        printf("Voce eh vencedor");
    }else{
        printf("!F R A C A S S A D O!");
    }

    return EXIT_SUCCESS;
}


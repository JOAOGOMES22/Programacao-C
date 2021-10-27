/*
============================================== 
Nome: Aula04.c
Autor: Allan Rodrigo e João Vitor Silva Gomes
Dt. Criacao: 24/08/2021
Versao: 0.1
Descricao: Fatorial
============================================== 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, i;
    i = 0;

    while(n >= 0){
        n = 0;
        printf("Insira o valor do fatorial: \n");
        scanf("%d", &n);

        if (n > 0){
            for  (i = n -1; i > 0; i--) {
                n *= i;
            }
            printf("Fatorial = %d\n", n);
        }

        if (n == 0) {
            printf("%d! = 1\n", n);
        }
    } 
}
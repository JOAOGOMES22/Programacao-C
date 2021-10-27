/*
============================================== 
Nome: Aula03.c
Autor: Allan Rodrigo e João Vitor Silva Gomes 
Dt. Criacao: 17/08/2021
Versao: 0.1
Descricao: Fala se o aluno está 
============================================== 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
        int n1,n2,n3,f,m;
        
        printf("Informe as tres notas do aluno!");
        scanf("%d%d%d", &n1, &n2, &n3);
        printf("Informe a frequencia do aluno!");
        scanf("%d", &f);

        
        m = (n1+n2+n3)/3;

        if ((m >= 7) && (f >= 75)){
            printf ("aluno APROVADO");
        } else
        
        if ((m > 4) && (f >= 75 )){
            printf ("Aluno em RECUPERAÇÃO");
        } else  
        
        if ((m < 4) || (f <= 75 )){
            printf ("Aluno em REPROVADO");
        }
                
    return EXIT_SUCCESS;
}
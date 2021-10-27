/*
============================================== 
Nome: Aula05.4.c
Autor: Allan Rodrigo e noao Vitor
Dt. Criacao: 13/09/2021
Versao: 0.1
Descricao: Impar ou par
============================================== 
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
    int p1, pm, pt1, ptm;
    int result;
    char ip, resp;
    ip="";
    resp="";
    ptm=0; 
    pt1=0;
    pm=0;
    srand(time(NULL));

    while (resp != 'N'){
        printf("Voce quer ser o impar(I) ou o par(P)? \n");
        scanf(" %c", &ip);
        printf("Agora escolha um numero de 1 a 5 \n");
        scanf(" %d", &p1);
       
        pm=rand() % 6;
        printf("%d", pm);
        result=p1+pm; 

            if (ip == 'P'){
                if ((result%2)==0){
                    pt1++;
                } else {
                    ptm++;
                }
            }else if (ip == 'I'){
                if ((result%2)==0){
                    ptm++;
                } else {
                    pt1++;
                }
            } 

        printf("\nVoce deseja continuar jogando? sim(S), nao(N) \n");
        scanf(" %c", &resp);   
    }
    
    printf("Voce fez %d pontos \n A maquina fez %d pontos\n", pt1, ptm);
    if (pt1>ptm){
        printf("!!Parabens voce ganhou!!");
    } else {
        printf("!!Voce e pessimo, perdeu pra maquina!!");
    }
    if (pt1==ptm){
        printf("!Empatou!");
    }
    

    return EXIT_SUCCESS;
}
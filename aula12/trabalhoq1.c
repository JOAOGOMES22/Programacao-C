/*
 ============================================================================
 Name        : Car.c
 Autor       : Allan Rodrigo e João Vitor SIlva Gomes
 Version     : 0.1
 Description : Faça um programa que leia um vetor com os dados de 5 carros: 
 marca (máximo 15 letras), ano e preço. Leia um valor p e mostre as informa-
 ções de todos os carros com preço menor que p. Repita este processo até que 
 seja lido um valor p = 0.
 ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct car {
        char marca[16];
        int ano;
        float preco;
};

void main (void){
    float p=1;
    int x;
    struct car lista[5]; 

    for (x=0;x<5;x++) {

        printf("Digite a marca do %i carro: ",x+1);
        scanf("%s",&lista[x].marca);
        fflush(stdin);

        printf("Ano: ");
        scanf("%i",&lista[x].ano);
        fflush(stdin);
        
        printf("Preco: ");
        scanf("%f",&lista[x].preco);
        fflush(stdin);
    }

    for(;;){
        printf("Procurar carros com preco abaixo de: ");
        scanf("%f",&p);
        fflush(stdin);

        if(p==0){
            exit(0);
        }

        int valida=0;

        for(x=0;x<5;x++){
            if(lista[x].preco < p){
                printf("\nMarca: %s\tAno: %i\tPreco: %.2f\n\n", lista[x].marca, lista[x].ano, lista[x].preco);
                valida=1;
            }
        }
        if(valida==0){
            printf("\nNão encontrado valor abaixo do preco estipulada.\n\n");
        }
    }
}
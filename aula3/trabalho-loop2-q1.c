/*
============================================== 
Nome: Aula05.1.c
Autor: Allan Rodrigo e noao Vitor
Dt. Criacao: 13/09/2021
Versao: 0.1
Descricao: alinhando numeros aleatorios
============================================== 
*/
#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b){ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
// faz a organizção dos numeros 
void bubbleSort(int *v, int n){ 
    if (n < 1)return; 
 
    for (int i=0; i<n; i++) 
        if (v[i] > v[i+1]) 
            swap(&v[i], &v[i+1]);  
    bubbleSort(v, n-1); 
} 

int main(){
    int tam,i,*v;
    tam=20;
    srand(time(NULL));
    v=(int*)malloc(tam*sizeof(int));
    //sorteia os numeros
    for(i=0;i<tam;i++)
    v[i]=rand() % 101;
    bubbleSort(v,tam-1);
    //printa os numeros
    for(i=0;i<tam;i++)
    if (v[i]!=v[i-1]){
        printf("%d ",v[i]);    
    }
    //vê quantas vezes rodou o for
    printf("\n %d", i);
    return 0;
}
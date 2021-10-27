/*
============================================== 
Nome: Aula03.2.c
Autor: Allan Rodrigo e João Vitor Silva Gomes 
Dt. Criacao: 17/08/2021
Versao: 0.1
Descricao: Imprimir ordem crescente e/ou decrescente
============================================== 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){             //i=x j=y a=z n=s
int x, y, z, s, number[4];

printf("coloque o valor \n");
scanf("%d", &s);
printf("Enter the numbers \n");
for (x = 0; x < s; ++x)
    scanf("%d", &number[x]);
for (x = 0; x < s; ++x)
{
    for (y = x + 1; y < s; ++y)
    {
        if (number[x] > number[y])
        {
            z =  number[x];
            number[x] = number[y];
            number[y] = z;
        }
    }
}
printf("Os numeros em ordem crescente é \n");
for (x = 0; x < s; ++x)
    printf("%d\n", number[x]);
}
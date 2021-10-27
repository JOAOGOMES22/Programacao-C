/*
============================================== 
Nome: questao3
Autor: Allan Rodrigo e João Vitor Silva Gomes 
Dt. Criacao: 28/09/2021
Versao: 0.1
Descricao: Pagamento da loja
============================================== 
*/

#include <stdio.h>
#include <stdlib.h>

void o1(float sale){
    float x;

    x = sale*0.9;
    printf("Valor a ser pago eh: R$%.2f", x);
}

void o2(float sale){
    float x;

    x = sale/2;
    printf("Valor a ser pago eh: 2x de R$%.2f", x);
}

void o3(float sale){
    float x;
    int i;

    printf("Em quantas vezes sera o pagamento: ");
    scanf("%d", &i);

    x = (sale/i)*1.03; 

    printf("Valor a ser pago eh: %dx de R$%.2f", i, x);    
}

int op(){
    int i;

    printf("1 - a vista com 10 por cento de desconto");
    putchar('\n');
    printf("2 - em duas vezes, sem juros");
    putchar('\n');
    printf("3 - de 3 ate 10 vezes com 3 por cento de juros ao mes (somente para compras acima de R$100,00)\n");
    printf("Deseja qual opcao: ");
    scanf("%d", &i);

    return i;
}

int main(void){
    
    float sale;
    int i;

    i = 0;

    printf("Quanto a cliente gastou: ");
    scanf("%f", &sale);

    i = op();

    switch (i) {
        case 1:
            o1(sale);
            break;
    
        case 2:
            o2(sale);
            break;

        case 3:
            o3(sale);
            break;

        default:
            break;
    }
    return EXIT_SUCCESS;
}
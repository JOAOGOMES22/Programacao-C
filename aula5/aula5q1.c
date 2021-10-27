/*
============================================== 
Nome: Aula05q2.c
Autor: Allan Rodrigo e João Vitor Silva Gomes
Dt. Criacao: 28/09/2021
Versao: 0.1
Descricao: INSS
============================================== 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    float f1, f2, f3, f4, sl, pg1, pg2, pg3, pg4, pf;

    f1=0.075;
    f2=0.09;
    f3=0.12;
    f4=0.14;
    

    printf("Qual o seu salario atual?\n");
    scanf("%f", &sl);

    pg1=f1*sl;
    pg2=f1*(1100-0)+f2*(sl-1100.01);
    pg3=f1*(1100-0)+f2*(2203.48-1100.01)+f3*(sl-2203.49);
    pg4=f1*(1100-0)+f2*(2203.48-1100.01)+f3*(3305.22-2203.49)+f4*(sl-3305.23);
    pf=751.97;

    if (sl<1100){
        printf("Voce deve pagar R$%.2f de INSS (esta dentro da faixa 1)", pg1);
    }else if (sl > 1100.01 && sl < 2203.48){
        printf("Voce deve pagar R$%.2f de INSS (esta dentro da faixa 2)", pg2);
    }else if (sl > 2203.49 && sl < 3305.22){
        printf("Voce deve pagar R$%.2f de INSS (esta dentro da faixa 3)", pg3);
    }else if (sl > 3305.23 && sl < 6433.57){
        printf("Voce deve pagar R$%.2f de INSS (esta dentro da faixa 4)", pg4);
    }else if (sl > 6433.58){
        printf("Voce deve pagar R$%f de INSS (pagamento fixo para sua faixa)", pf);
    }

    return EXIT_SUCCESS;
}


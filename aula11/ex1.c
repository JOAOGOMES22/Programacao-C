#include <stdio.h>  
#include <stdlib.h>
#include <locale.h>

float somar (float N1, float N2){
    return N1 + N2;
}

float sub (float N1, float N2){
    return N1 - N2;
}

float multi (float N1, float N2){
    return N1 * N2;
}

float divi (float N1, float N2){
    return N1 / N2;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int op;
    float N1, N2, res;

    printf("---- Calculadora Simples ----\n");
    printf("-----------------------------\n");
    printf("Primeiro valor: ");
    scanf ("%f", &N1);
    printf("Segundo valor: ");
    scanf ("%f", &N2);
    printf("-----------------------------\n");
    printf("1- Somar \n");
    printf("2- Subtrair \n");
    printf("3- Multiplicar \n");
    printf("4- Dividir \n");
    printf("-----------------------------\n");
    printf("Faca sua escolha: ");
    scanf ("%d", &op);
        switch (op){
        case 1:
            res = somar(N1, N2);
            break;
        case 2:
            res = sub(N1, N2);
            break;
        case 3:
            res = multi(N1, N2);
            break;
        case 4:
            if (N2 == 0){
                printf("Nao eh possivel dividir por 0\n");
            }else{
                res = divi(N1, N2);
            }
            break;
        default:
            printf("Opcao invalida!!\n");
            break; 
        }
    printf("-----------------------------\n");
    printf("Resultado %.2f\n\n",res);
    system("pause");

return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char P1[100], P2[100];
    int i   = 0; 
    int tam = 0; 
    int dif = 0; 
    int j   = 0;

    printf("Digite uma frase: ");
    scanf("%100[^\n]", P1);

    for(i = 0; i < strlen(P1); i++){
        if(P1[i] != '!' && P1[i] != '?' && P1[i] != ' ' && P1[i] != '.')
            P2[j++] = P1[i];
    }

    P2[j] = '\0';

    printf("Original: %s \n", P1);

    tam = strlen(P2);
    tam--;
    
    for(i = 0; i < strlen(P2); i++){
        if(P2[i] != P2[tam]){
            dif++;
        }
        tam--;
    }

    if(dif == 0){
        printf("Eh uma frase ou palavra palindroma\n");
    }else{
        printf("Nao eh uma frase ou palavra palindroma\n");
    }

    return 0;
}
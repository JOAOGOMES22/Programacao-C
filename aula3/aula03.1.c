#include <stdio.h>
#include <stdlib.h>

int main(void){
        int x,y,z;
        
        printf("Informe os valores dos 3 lados de um triangulo!");
        scanf("%d%d%d", &x, &y, &z);

        if (x==y && x==z){
            printf("É um triangulo EQUILATERO \n");
        }else
        if (x==y || x==z || y==z){
                printf("É um triangulo ISOSCELES\n");
        }else{
                printf("É um triangulo ESCALENO");
        }
    
    return EXIT_SUCCESS;
}
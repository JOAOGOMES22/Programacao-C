#include <stdio.h>
#include <stdlib.h>

int main(void){
    char c = 'C';
    setbuf(stdout,NULL);
    
    while (c!= 'S' && c!='s'){
        printf("informe um caracter, ou (S)air");
        scanf("%c", c);
        if (c=='S' || c=='s'){
            printf("saida do programa.");
        } else {
            printf("caractere=%c\n", c);
        }
        
    }
    return EXIT_SUCCESS;
}
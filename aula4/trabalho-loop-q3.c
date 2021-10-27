#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x, i;
    float n1, n2, n;

    n1=1;
    n2=0;
    n= 1;

    printf("Insira um número inteiro: ");
    scanf("%d", &x);

    if (x == 1){
        printf("%.0f, ", n2);
    }else if (x == 2){
        printf("%.0f, %.0f, ", n2, n1);
    }else if (x == 0){
            printf("Vai estudar...");
    }else{
            printf("0 1 ");
            for (i = 2; i < x; i++)
            {
                n = n1 + n2;
                printf("%.0f ", n);
                n2 = n1;
                n1 = n;
            }
        }
    
    return EXIT_SUCCESS;
}

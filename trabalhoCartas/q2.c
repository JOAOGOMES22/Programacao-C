#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char baralho[53][3];
char cards[13] = {'A','2','3','4','5','6','7','8','9','X','J','Q','K'};
char naipe[4] = {'O','E','C','P'};
//int CTC, CTJ, CTCD;
void DeclaraBaralho(){
    int i, j, p;
    int c = 0;

    for (i=0;  i<13 ;i++){
        for (j=0; j<4; j++){
            c++;
            for (p=0; p<3; p++){
                if (p==0){
                    baralho[c][p] = cards[i];
                }else if (p==1){
                    baralho[c][p] = '-';
                }else if(p==2){
                    baralho[c][p] = naipe[j];
                }
            
            }
        }
    }
     /*for (c=0; c<52; c++){
         for ( i=0; i<3; i++){
            printf("%c", baralho[c][i]);
        }
        printf("\n");
    }*/
}

void EmbaralhaBaralho(){
    srand(time(0));
    char BE[52][3];
    char BEC[52][3];
    int num;

    int i, p, c;
    int e = 0;

    do{
        for (c=0; c<52; c++){
            num=rand() %52;
            for (p=0; p<3; p++){
                if (p==0){
                    BE[c][p] = baralho[num][0];
                }else if (p==1){
                    BE[c][p] = '-';
                }else if(p==2){
                    BE[c][p] = baralho[num][2];
                }

            }         
        }

        for (c=0; c<52; c++){
            if (BC[c]){
                
            }
            
        }
        

    } while (i<52);
    
    

    for (c=0; c<52; c++){
         for ( i=0; i<3; i++){
            printf("%c", BE[c][i]);
        }
        printf("\n");
    }
}

int main(){
    DeclaraBaralho();
    EmbaralhaBaralho();
return(0);
}

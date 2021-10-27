#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "forca.h"

char PChave[TAMANHO_PALAVRA];
char tentativas[6];
int CTT = 0;


int letraexiste(char letra) {

	for(int j = 0; j < strlen(PChave); j++) {
		if(letra == PChave[j]) {
			return 1;
		}
	}

	return 0;
}

int TErradas() {
	int erros = 0;

	for(int i = 0; i < CTT; i++) {
		
		if(!letraexiste(tentativas[i])) {
			erros++;
		}
	}

	return erros;
}

int enforcou() {
	return TErradas() >= 5;
}

int ganhou() {
	for(int i = 0; i < strlen(PChave); i++) {
		if(!jachutou(PChave[i])) {
			return 0;
		}
	}

	return 1;
}


void abertura() {
	printf("\n*****************\n");
	printf("* Jogo da Forca *\n");
	printf("*****************\n\n");
}

void chuta() {
	char chute;
    int i = 0;
	printf("\nChute uma letra? ");
	scanf(" %c", &chute);

    chute = tolower(chute);

	if(letraexiste(chute)) {
		printf("Voce acertou: a palavra tem a letra %c\n\n", chute);
	} else {
		printf("\nVoce errou: a palavra NAO tem a letra %c\n\n", chute);
	}

	tentativas[CTT] = chute;
	CTT++;
	return;
}

int jachutou(char letra) {
	int achou = 0;
	for(int j = 0; j < CTT; j++) {
		if(tentativas[j] == letra) {
			achou = 1;
			break;
		}
	}

	return achou;
}

void desenhaforca() {

	int erros = TErradas();

	printf("  _______       \n");
	printf(" |/      |      \n");
	printf(" |      %c%c%c  \n", (erros>=1?'(':' '), (erros>=1?'_':' '), (erros>=1?')':' '));
	printf(" |      %c%c%c  \n", (erros>=3?'\\':' '), (erros>=2?'|':' '), (erros>=3?'/': ' '));
	printf(" |       %c     \n", (erros>=2?'|':' '));
	printf(" |      %c %c   \n", (erros>=4?'/':' '), (erros>=4?'\\':' '));
	printf(" |              \n");
	printf("_|___           \n");
	printf("\n\n");

	for(int i = 0; i < strlen(PChave); i++) {

		if(jachutou(PChave[i])) {
			printf("%c ", PChave[i]);
		} else {
			printf("_ ");
		}

	}
	printf("\n");
	return;
}

void escolhepalavra() {
	int qtddepalavras;
	int randomico = rand() % qtddepalavras;
	FILE* f;

	f = fopen("palavras.txt", "rt");
	if(f == 0){
		printf("Banco de dados de palavras não disponível\n\n");
		exit(1);
	}

	fscanf(f, "%d", &qtddepalavras);

	srand(time(NULL));
	
	for(int i = 0; i <= randomico; i++) {
		fscanf(f, "%s", PChave);
	}

	fclose(f);
	return;
} 

int main() {
	char RP;

	abertura();
	escolhepalavra();

        do {
		    desenhaforca();
		    chuta();
	    } while (!ganhou() && !enforcou());
	    	
		if(ganhou()) {
		    printf("\nParabéns, você ganhou! A palavra era %s\n\n", PChave);
	    } else {
		    printf("\nPuxa, você foi enforcado!\n");
		    printf("A palavra era ** %s **\n\n", PChave);
		}

	printf("Voce deseja continuar jogando?");
	scanf(" %c", &RP);
	
	if (RP != "N" || RP != "n"){
		abertura();
		escolhepalavra();

        do {
		    desenhaforca();
		    chuta();
	    } while (!ganhou() && !enforcou());
	    	
		if(ganhou()) {
		    printf("\nParabéns, você ganhou! A palavra era %s\n\n", PChave);
	    } else {
		    printf("\nPuxa, você foi enforcado!\n");
		    printf("A palavra era ** %s **\n\n", PChave);
		}

	printf("Voce deseja continuar jogando?");
	scanf(" %c", &RP);
	}else{
		return EXIT_SUCCESS;
	}
}
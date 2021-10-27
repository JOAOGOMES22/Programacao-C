#include <stdio.h>
#include <string.h>


char *First_vogal(char *s)
{
	int tamanho = strlen(s);
	for(int i = 0; i < tamanho; ++i){
		switch(s[i]){
			case'a': case'A':case'e':case'E':case'i':case'I':case'o':case'O':case'u':case'U':{
				printf("O [%d] caracter eh ah primera vogal, endereco: %p\n",i,&s[i]);
				return &s[i];
			}
		}
	}
	return NULL;
}
int main(int argc, char **argv)
{
	char string[50];
	printf("Escreva uma frase qualquer!");
	scanf("%s",string);
	printf("%p",First_vogal(string));
	return 0;
}
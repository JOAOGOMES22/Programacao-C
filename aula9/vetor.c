#include <stdio.h>
#include <string.h>


void first_vocal(char *frase)
{
	int size = strlen(frase);
	for(; size > -1; --size)
	{
		switch(frase[size])
		{
			case'a': case'A':case'e':case'E':case'i':case'I':case'o':case'O':case'u':case'U':
			{
				printf("Char[%d] é vogal, endereço: %p, começo: %p\n",size,&frase[size],&frase);
				break;
			}
		}
	}
}
int main(int argc, char **argv)
{
	char string[50];
	printf("frase aleatoria?");
	scanf("%s",string);
	first_vocal(string);
	return 0;
}

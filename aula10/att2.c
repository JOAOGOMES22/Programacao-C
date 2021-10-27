#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char s[50] = {"abacate"};
    char *ch;

    ch = strrchr(s, 'a');

    printf("\n%p\n", ch);

    return 0;
}
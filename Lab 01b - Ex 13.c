// Faça um rotina que remova um caracter de uma string do tipo char Str[100], dada a posição do caracter.

#include<stdio.h>
#include<string.h>

void remover(char str[], int i){
    str[i] = '.';
}

int main(){
    int p;
    char str[100];
    printf("\nFrase: ");
    scanf("%s", str);
    printf("\nPosicao: ");
    scanf("%i", &p);
    remover(str, p);
    printf("\nFrase Alterada: %s", str);
    return 0;
}

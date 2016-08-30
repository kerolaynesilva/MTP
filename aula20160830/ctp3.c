#include<stdio.h>
#include<ctype.h>
int main(){
    int indice=0, cont=0;
    char investigador;
    char frase[256];
    printf("Escreva uma frase: ");
    gets(frase);
    investigador = frase[indice];
    while(investigador){
            if(isalpha(investigador))
            cont++;
        indice++;
        investigador = frase[indice];
    }
    printf("Quantidade de letras: %d\n", cont);
    return 0;
}

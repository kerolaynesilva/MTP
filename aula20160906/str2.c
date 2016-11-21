#include <stdio.h>
#include <string.h>
#define N 256
int main(){
    int i;
    char frase[N];
    printf("Digite uma frase: ");
    gets(frase);
    printf("Mensagem oculta: ");
    printf("%c", frase[0]);
    for(i=0 ; frase[i] != '\0'; i++){
        if(frase[i] == ' ')
        printf("%c", frase[i+1]);
    }
    return 0;
}

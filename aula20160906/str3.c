#include <stdio.h>
#include <string.h>
#define N 256
int main(){
    int i,j = 0;
    char frase[N];
    printf("Digite uma frase: ");
    gets(frase);
    for(i=0 ; frase[i] != '\0'; i++){

        if (strcmp(frase,strrev(frase)) == 0){
            printf("A frase e palindromo!!!\n");
            break;
        }
        else{
            printf("Nao e palindromo!\n");
            break;
            }
    }
    return 0;
}

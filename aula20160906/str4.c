#include <stdio.h>
#include <string.h>
#define N 256
int main(){
    int i,j = 0;
    char frase[N];
    printf("Digite uma frase: ");
    gets(frase);
    for(i=0 ; frase[i] != '\0'; i++){
        if(frase[i] == 'a')
        frase[i] = 'n';
        if(frase[i] == 'b')
        frase[i] = 'o';
        if(frase[i] == 'c')
        frase[i] = 'p';
        if(frase[i] == 'd')
        frase[i] = 'q';
        if(frase[i] == 'e')
        frase[i] = 'r';
        if(frase[i] == 'f')
        frase[i] = 's';
        if(frase[i] == 'g')
        frase[i] = 't';
        if(frase[i] == 'h')
        frase[i] = 'u';
        if(frase[i] == 'i')
        frase[i] = 'v';
        if(frase[i] == 'j')
        frase[i] = 'w';
        if(frase[i] == 'k')
        frase[i] = 'x';
        if(frase[i] == 'l')
        frase[i] = 'y';
        if(frase[i] == 'm')
        frase[i] = 'z';
        if(frase[i] == 'A')
        frase[i] = 'N';
        if(frase[i] == 'B')
        frase[i] = 'O';
        if(frase[i] == 'C')
        frase[i] = 'P';
        if(frase[i] == 'D')
        frase[i] = 'Q';
        if(frase[i] == 'E')
        frase[i] = 'R';
        if(frase[i] == 'F')
        frase[i] = 'S';
        if(frase[i] == 'G')
        frase[i] = 'T';
        if(frase[i] == 'J')
        frase[i] = 'U';
        if(frase[i] == 'I')
        frase[i] = 'V';
        if(frase[i] == 'J')
        frase[i] = 'W';
        if(frase[i] == 'K')
        frase[i] = 'X';
        if(frase[i] == 'L')
        frase[i] = 'Y';
        if(frase[i] == 'M')
        frase[i] = 'Z';
    }
    printf("Frase codificada: %s\n", frase);
    return 0;
}

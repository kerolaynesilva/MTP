#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lanca_dado();

int main(){
    srand(time(0));
    int soma_dados, tentativa = 1;
    printf("\nJogo soma dos dados:\n");
    do{
       soma_dados = lanca_dado();
       if(soma_dados >= 21)
         printf("\nVoce ganhou!\n Soma = %d", soma_dados);
       else
         printf("\nVoce perdeu!\n Soma = %d", soma_dados);
       tentativa ++;
    }
    while(tentativa <= 3);
    printf("\nSuas tentativas acabaram!\n");
    return 0;
}

int lanca_dado(){
    int soma = 0,i;
    for(i = 1; i < 5; i++){
        soma += (rand()%6)+1;
    }
    return soma;
}


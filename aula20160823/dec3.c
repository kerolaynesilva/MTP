#include<stdio.h>
#include<time.h>
int main (){
    srand(time(0));
    int dado1,dado2,dado3,soma;
    dado1=rand()%6+1;
    dado2=rand()%6+1;
    dado3=rand()%6+1;
    soma=dado1+dado2+dado3;
    printf("Dado1:%d\n",dado1);
    printf("Dado2:%d\n",dado2);
    printf("Dado3:%d\n",dado3);
    printf("O resultado da soma e:%d\n",soma);
    if(soma==7||soma==11)
        printf("Parabens, voce ganhou!\n");
    else
        printf("Nao foi dessa vez, tente novamente!\n");
    return 0;
}

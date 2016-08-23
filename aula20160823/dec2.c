#include<stdio.h>
#include<time.h>
int main (){
    srand(time(0));
    int numero,soma;
    printf("Favor entrar com um numero inteiro e positivo: ");
    scanf("%d",&numero);
    soma=numero+rand()%(1+1);
    printf("O resultado da soma e:%d\n",soma);
    if(soma%2==0)
        printf("A soma e par\n");
    else
        printf("A soma e impar\n");
    return 0;
}

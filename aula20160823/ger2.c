#include<stdio.h>
#include<time.h>
int main (){
    srand(time(0));
    int numero,valor,tent=0;
    valor=rand()%99+1;
    do{
        printf("Escolha um numero entre 0 e 99:");
        scanf("%d",&numero);
        if(numero<valor)
            printf("Baixo!\n");
        else
            printf("Alto!\n");
        tent++;
    }
    while(numero!=valor);
    if(numero==valor)
        printf("Acertou!\n");
    printf("Quantidade de tentativas:%d",tent);
    return 0;
}


#include<stdio.h>
int main (){
    int valor;
    printf("Favor entrar com um numero: ");
    scanf("%d",&valor);
    if(valor%2==0)
        printf("O numero e par \n");
    else
        printf("O numero e impar \n");
    if(valor%3==0)
        printf("O numero e divisivel por 3 \n");
    else
        printf("O numero nao e divisivel por 3 \n");
    if(valor%5==0)
        printf("O numero e divisivel por 5 \n");
    else
        printf("O numero nao e divisivel por 5 \n");
    if(valor%7==0)
        printf("O numero e divisivel por 7 \n");
    else
        printf("O numero nao e divisivel por 7 \n");
    return 0;
}

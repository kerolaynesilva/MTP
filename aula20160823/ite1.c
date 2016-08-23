#include<stdio.h>
int main (){
    int numero,fat=1,i;
    printf("Digite um numero inteiro:");
    scanf("%d",&numero);
    for(i=2;i<=numero;i++)
            {
                        fat=fat*i;
                            }
    printf("O fatorial do numero e:%d",fat);
    return 0;
}


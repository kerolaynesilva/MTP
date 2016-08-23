#include<stdio.h>
int main (){
    int base,potencia,res=1,i;
    printf("Digite a base:");
    scanf("%d",&base);
    printf("Digite a potencia:");
    scanf("%d",&potencia);
    for(i=1;i<=potencia;i++)
        res=res*base;
    printf("O resultado e:%d",res);
    return 0;
}


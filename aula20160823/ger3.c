#include<stdio.h>
int main (){
    int numero,i,soma=0;
    printf("Digite o numero:");
    scanf("%d",&numero);
    for(i=1; i<numero; i++){
            if(numero%i==0)
        soma=soma+i;
    }
    if(numero==soma)
        printf("O numero e perfeito!\n");
    else
        printf("O numero nao e perfeito!\n");
    return 0;
}

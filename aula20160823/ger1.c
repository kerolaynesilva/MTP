#include<stdio.h>
int main (){
    int numero,i;
    printf("Digite um numero:");
    scanf("%d",&numero);
    for(i=2; i<numero; i++){
           if(numero%i==0){
              printf("nao e primo!\n");
              break;}
    }
    if(i==numero)
        printf("Primo!\n");
    return 0;
}


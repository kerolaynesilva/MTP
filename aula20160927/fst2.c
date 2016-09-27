#include <stdio.h>

struct Fracao{
    int numerador;
    int denominador;
};
struct Fracao soma(int num1,int den1,int num2,int den2);
int main(){
    struct Fracao resposta;
    int num1,den1,num2,den2;
    printf("Entre com a primeira fracao: ");
    scanf("%d/%d",&num1,&den1);
    printf("Entre com a segunda fracao: ");
    scanf("%d/%d",&num2,&den2);
    resposta = soma(num1,den1,num2,den2);
    printf("Soma das fracoes: %d/%d\n", resposta.numerador,resposta.denominador);
    return 0;
}
struct Fracao soma(int num1,int den1,int num2,int den2){
    struct Fracao resposta;
    if(den1 == den2){
            resposta.denominador = den1;
            resposta.numerador = num1 + num2;
    }
    else{
        resposta.denominador = den1*den2;
        resposta.numerador = num1*den2 + num2*den1;
    }
    return resposta;
}

#include<stdio.h>
int main (){
    float nota1,nota2,nota3,media;
    printf("Favor entrar com a primeira nota: ");
    scanf("%f",&nota1);
    printf("Favor entrar com a segunda nota: ");
    scanf("%f",&nota2);
    printf("Favor entrar com a terceira nota: ");
    scanf("%f",&nota3);
    media=(nota1*2+nota2*3+nota3*5)/10;
    printf("A media do aluno e: %f",media);
    return 0;
}


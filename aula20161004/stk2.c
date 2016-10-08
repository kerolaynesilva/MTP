#include <stdio.h>
#include <math.h>
float media(float num1,float num2,float num3,float num4,float num5);
void desvio_padrao(float media,float num1,float num2,float num3,float num4,float num5);
int main(){
    float num1,num2,num3,num4,num5;
    float x;
    printf("Digite 5 numeros: ");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    scanf("%f", &num4);
    scanf("%f", &num5);
    x = media(num1,num2,num3,num4,num5);
    printf("Media = %.1f\n", x);
    desvio_padrao(x,num1,num2,num3,num4,num5);
    return 0;
}
float media(float num1,float num2,float num3,float num4,float num5){
    float soma,media;
    soma = num1+num2+num3+num4+num5;
    media = soma/5;
    return media;
}
void desvio_padrao(float media,float num1,float num2,float num3,float num4,float num5){
    float desvio;
    desvio = sqrt((pow((media-num1),2)+pow((media-num2),2)+pow((media-num3),2)+pow((media-num4),2)+pow((media-num5),2))/4);
    printf("Desvio padrao = %.4f\n", desvio);
}



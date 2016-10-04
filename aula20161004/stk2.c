#include <stdio.h>
#include <math.h>

float media(int num1,int num2,int num3,int num4,int num5);
int main(){
    int num1,num2,num3,num4,num5;
    printf("Digite 5 numeros: ");
    scanf("%d", num1);
    scanf("%d", num2);
    scanf("%d", num3);
    scanf("%d", num4);
    scanf("%d", num5);
    printf("Media = ", media(num1,num2,num3,num4,num5));
    return 0;
}
float media(int num1,int num2,int num3,int num4,int num5){
    int i;
    float soma,media;
    soma = num1+num2+num3+num4+num5;
    media = soma/5;
    return media;
}
void desvio_padrao(float media,int num1,int num2,int num3,int num4,int num5){
    float desvio;
    desvio = sqrt((pow(media-num1),2)+pow(media-num2),2)+pow(media-num3),2)+pow(media-num4),2)+pow(media-num5),2))/4);

}

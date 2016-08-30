#include <stdio.h>
#include <math.h>
int main(){
    float x1,y1,x2,y2,dist,soma;
    printf("Digite as coordenadas x e y do primeiro ponto: ");
    scanf("%f", &x1);
    scanf("%f", &y1);
    printf("Digite as coordenadas x e y do segundo ponto: ");
    scanf("%f", &x2);
    scanf("%f", &y2);
    soma=pow((x2-x1),2.)+pow((y2-y1),2.);
    dist=sqrt(soma);
    printf("A distancia entre os dois pontos e: %f\n", dist);
    return 0;
}


#include <stdio.h>
#include <math.h>
int main(){
    float lado1,lado2,angulo,lado3;
    printf("Digite dois lados de um triangulo: ");
    scanf("%f", &lado1);
    scanf("%f", &lado2);
    printf("Digite o angulo em radianos formado por esses lados: ");
    scanf("%f", &angulo);
    lado3 = sqrt(pow(lado1,2.)+pow(lado2,2.)-2*lado1*lado2*cos(angulo));
    printf("O terceiro lado e: %f\n", lado3);
    return 0;
}

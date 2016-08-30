#include <stdio.h>
#include <math.h>
int main(){
    float num,base,logaritmo;
    printf("Digite um numero: ");
    scanf("%f", &num);
    printf("Digite a base do logaritmo: ");
    scanf("%f", &base);
    logaritmo=log10(num)/log10(base);
    printf("O logaritmo de %f na base %f e: %f\n", num,base,logaritmo);
    return 0;
}


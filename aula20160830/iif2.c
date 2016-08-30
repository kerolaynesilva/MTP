#include <stdio.h>
#include <math.h>
int main(){
    int num,i;
    double fat=1;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++){
        fat=fat*i;
    }
    printf("O fatorial de %d e: %f", num,fat);
    return 0;
}


#include <stdio.h>

void par();
void impar();

int main(){
    int num;
    printf("Escolha uma opcao:\n 1-Numeros pares entre 1 a 10\n 2-Numeros impares entre 1 a 10: ");
    scanf("%d", &num);
    if(num == 1)
        par();
    else
        impar();
    return 0;
}
void par(){
    int i;
    printf("Numeros pares: ");
    for(i=1 ; i<10 ; i++)
        if(i%2 == 0)
        printf("%d ", i);
}
void impar(){
    int i;
    printf("Numeros impares: ");
    for(i=1 ; i<10 ; i++)
        if(i%2 != 0)
        printf("%d ", i);
}

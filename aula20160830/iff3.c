#include <stdio.h>
int main (){
    int num,invertido,i;
    float soma1 = 0;
    double soma2 = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if(num >= 0){
            printf("Numero invertido: ");
        do{
            invertido = num % 10; //O resto do numero e o ultimo digito
            printf("%d", invertido);//Imprime o numero
            num = num / 10; //Divide o numero por 10 para avancar no proximo numero
        }
        while (num != 0);
        printf("\n\n");
    }
    for(i = 1; i < 729; i++){
        soma1 += (float)invertido;
    }
    for(i = 1; i < 729; i++){
        soma2 += (double)invertido;
    }
    printf("Soma tipo float: %.15g \n", soma1);
    printf("Soma tipo double: %.15g \n", soma2);
    return 0;
    }

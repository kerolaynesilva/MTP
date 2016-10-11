#include <stdio.h>
#include <stdlib.h>
float * inicializaNumero();
float * recebeNumero(float * numero);
void media(float * numero);
void procurar(float * numero);
int main(){
    float * numero;
    int c;
    numero = inicializaNumero();
    do{
    printf("Digite:\n1-par entrar com um numero\n2-para sair\n ");
    scanf("%d", &c);
    if(c == 1){
    printf("Digite um numero: ");
    scanf("%f", &numero);
    numero = recebeNumero(numero);
    }
    }while(c != 2);
    media(numero);
    procurar(numero);
    return 0;
    }
float * inicializaNumero(){
    float * numero;
    numero= (float *) malloc(sizeof(float));
    numero [0] = '\0';
    return numero;
}
float * recebeNumero(float * numero){
    int c, tamanho = 0;
    c = getchar();
    tamanho ++;
    numero= (float *) realloc(numero,(tamanho+1)*sizeof(float));
    numero[tamanho] = '\0';
    numero[tamanho-1] = c;
    return numero;
}
void media(float * numero){
    int i,soma = 0,tamanho;
    for(i=0; i<'\0';i++){
        soma += numero[i];
    }
    tamanho = sizeof(numero)/sizeof(float);
    printf("Media dos numeros digitados: %f\n", soma/tamanho);
}
void procurar(float * numero){
    int maior = 0,menor = 0,i;
    for(i=0; i<'\0'; i++){
        if(maior >= numero[i])
            maior = numero[i];
    }
    printf("Maior numero digitado: %f\n", maior);
    for(i=0; i<'\0'; i++){
        if(menor <= numero[i])
            menor = numero[i];
    }
    printf("Menor numero digitado: %f\n", menor);
}






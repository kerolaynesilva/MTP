#include <stdio.h>
#include <stdlib.h>
float * recebeNumero(float * vetor,int * ptamanho);
float media(float * vetor, int tamanho);
float Maior(float * vetor,int tamanho);
float Menor(float * vetor,int tamanho);
int main(){
    float * vetor = NULL;
    int tamanho = 0, opc,i;
    do{
    vetor = recebeNumero(vetor,&tamanho);
    printf("Deseja entrar com outro? (0 - nao; 1 - sim):");
    scanf("%d", &opc);
    }while(opc != 0);
    printf("Numeros digitados: \n");
    for(i=0;i<tamanho;i++)
        printf("%f\n",vetor[i]);
    printf("Media dos numeros: %f\n", media(vetor,tamanho));
    printf("Maior numero digitado: %f\n", Maior(vetor,tamanho));
    printf("Menor numero digitado: %f\n", Menor(vetor,tamanho));
    free(vetor);
    return 0;
}
float * recebeNumero(float * vetor,int * ptamanho){
    (*ptamanho)++;
    if(vetor == NULL)
        vetor = (float *)malloc(sizeof(float));
    else
        vetor = (float *)realloc(vetor,(*ptamanho)*sizeof(float));
    printf("Entre com um numero: ");
    scanf("%f", &vetor[(*ptamanho)-1]);
    return vetor;
}
float media(float * vetor, int tamanho){
    float soma = 0.f;
    int i;
    for(i=0;i<tamanho;i++){
        soma += vetor[i];
    }
    return soma/tamanho;
}
float Maior(float * vetor,int tamanho){
    int i;
    float maior = vetor[0];
    for(i=0; i<tamanho; i++){
        if(maior <= vetor[i])
            maior = vetor[i];
    }
    return maior;
}
float Menor(float * vetor,int tamanho){
    int i;
    float menor = vetor[0];
    for(i=0; i<tamanho; i++){
        if(menor >= vetor[i])
            menor = vetor[i];
    }
    return menor;
}

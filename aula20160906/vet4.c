#include <stdio.h>
#include <time.h>
int main(){
    srand(time(0));
    int vetor[10];
    int i,num,aux,aux2;
    printf("Digite um numero inteiro entre 1 e 1000: ");
    scanf("%d", &num);
	for ( i = 0; i < num; i++){
            vetor[i] = rand()%(num+1);
            printf("Numero no vetor %d\n", vetor[i]);
	}
	for ( i = 0; i < num; i++){
            if(vetor[i] >= vetor[i+1])
                aux=vetor[i];
	}
	printf("Maximo vetor: %d\n", aux);
	for ( i= 0; i < num; i++){
            if(vetor[i] <= vetor[i+1])
                aux2=vetor[i];
	}
	printf("Minimo vetor: %d\n", aux2);
    return 0;
}

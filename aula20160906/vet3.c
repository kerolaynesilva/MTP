#include <stdio.h>
int main(){
    int vetor[10];
    int i,soma=0;
    float produto=1;
    printf("Digite dez numeros: ");
	for ( i = 0; i < 10; i++){
		scanf("%d", &vetor[i] );
	}
	for ( i=0; i<10; i++)
        soma+=vetor[i];
	printf("Soma do vetor %d\n", soma);
	for ( i=0; i<10; i++)
        produto=produto*vetor[i];
    printf("Produto do vetor %f\n", produto);
    return 0;
}


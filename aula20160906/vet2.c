#include <stdio.h>
int main(){
    int vetor[10];
    int i;
    printf("Digite dez numeros: ");
	for ( i = 0; i < 10; i++){
		scanf("%d", &vetor[i] );
	}
	printf("Vetor invertido: ");
	for ( i = 10-1; i>=0; i--)
		printf("%d", vetor[i]);
	printf("\n");
    return 0;
}


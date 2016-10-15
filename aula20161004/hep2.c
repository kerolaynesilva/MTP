#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int N; //linhas
	int M; //colunas
	float *elementos;
} Matriz;

float * at(Matriz matriz, int i, int j);
void preenche(float * elemento);
void imprime(Matriz matriz);
float **transpostaMatriz(Matriz matriz);

int main() {
  int i, j;
  Matriz matriz;
  printf("Entre com a ordem da Matriz, no formato 'NxM': ");
  scanf("%dx%d", &matriz.N, &matriz.M);
  matriz.elementos = calloc(matriz.N*matriz.M,sizeof(float));
  for(i = 0; i < matriz.N; i++)
    for(j = 0; j < matriz.M; j++) {
      printf("Elemento (%d,%d): ", i, j);
      preenche(at(matriz, i, j));
    }
  imprime(matriz);
  printf("Matriz transposta: \n");
  transpostaMatriz(matriz);
  imprime(matriz);
  free(matriz.elementos);
  return 0;
}

float * at(Matriz matriz, int i, int j) {
	return (i < matriz.N && j < matriz.M)? matriz.elementos + i*matriz.M + j : NULL;
}

void preenche(float * elemento) {
  scanf("%f", elemento);
}

void imprime(Matriz matriz) {
  int i, j;
  printf("matriz %dx%d:\n", matriz.N, matriz.M);
  for(i = 0; i < matriz.N; i++)
    for(j = 0; j < matriz.M; j++)
      printf("%g%c", *at(matriz, i, j), (j == matriz.M-1)? '\n':'\t');
}

float **transpostaMatriz(Matriz matriz){
    float **aux;
    int i, j;
    aux = (float**)(malloc(matriz.M*sizeof(float*)));
    // aloca memória para transposta na matriz aux
    for (i = 0; i < matriz.M; i++)
      aux[i] = (float*)(malloc(matriz.N*sizeof(float)));
    // matriz transposta recebe os valores
    for (i = 0; i < matriz.M; i++){
        for (j = 0; j < matriz.N; j++){
                aux[i][j] = matriz[j][i];
   }}
   return  aux;
}

#include <stdio.h>

int soma(int *A,int N);
int main(){
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int N = sizeof(A)/sizeof(int);
    printf("Soma do vetor = %d", soma(A,N));
    return 0;
}
int soma(int *A,int tamanho){
    int ultimo = tamanho-1;
    return (tamanho == 0)?0 : A[ultimo]+soma(A,tamanho-1);
}


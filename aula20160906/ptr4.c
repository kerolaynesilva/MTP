#include <stdio.h>
int main(){
    int contagem = 0;
    int vetor[2];
    printf("Digite dois numeros reais:");
    scanf("%c", &vetor);
    int tam = sizeof(vetor)/sizeof(int); //numero em bytes do numero de memoria
    unsigned char * ponteiro = NULL;
    ponteiro = (unsigned char *) vetor; //&(vetor[0])
    for(;ponteiro < (unsigned char *)(vetor + tam) ; ponteiro++){
        printf("%p : %X\n", ponteiro, *ponteiro);
        if(*ponteiro == 0x0)
            contagem++;
    }
    printf("Sao %d os bytes de memoria com apenas 0's.\n", contagem);
    return 0;
}

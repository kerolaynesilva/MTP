#include <stdio.h>
int main(){
    unsigned int numero = 0xFACA8421;
    unsigned char * ponteiro = NULL; //Aponta para lugar nenhum
    printf("%p : %u\n", &numero, numero);
    ponteiro = (unsigned char*) &numero; //Incialização do for
    for(;ponteiro < &numero + 1 ; ponteiro++)
            printf("%p : %X\n", ponteiro, * ponteiro);
    return 0;
}

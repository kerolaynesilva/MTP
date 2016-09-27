#include <stdio.h>

struct Divisao_inteira{
    int quociente;
    int resto;
};
struct Divisao_inteira divisao(int dividendo,int divisor);
int main(){
    struct Divisao_inteira resposta;
    int dividendo,divisor;
    printf("Entre com dividendo: ");
    scanf("%d", &dividendo);
    printf("Entre com divisor: ");
    scanf("%d", &divisor);
    resposta = divisao(dividendo,divisor);
    printf("Quociente %d, Resto %d\n", resposta.quociente,resposta.resto);
    return 0;
}
struct Divisao_inteira divisao(int dividendo,int divisor){
    struct Divisao_inteira resposta;
    resposta.quociente = dividendo/divisor;
    resposta.resto = dividendo%divisor;
    return resposta;
}

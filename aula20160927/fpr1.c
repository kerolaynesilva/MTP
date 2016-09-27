#include <stdio.h>
int divisao(int dividendo,int divisor,int *pquociente,int *presto);
int main(){
    int dividendo,divisor;
    int quociente,resto;
    printf("Entre com dividendo: ");
    scanf("%d", &dividendo);
    printf("Entre com divisor: ");
    scanf("%d", &divisor);
    if(divisao(dividendo,divisor,&quociente,&resto))
        printf("Quociente %d, Resto %d\n", quociente,resto);
    else
        printf("*erro*\n");
    return 0;
}
int divisao(int dividendo,int divisor,int *pquociente,int *presto){
    if(divisor != 0){
    *pquociente = dividendo/divisor;
    *presto = dividendo%divisor;
    return 1;
    }
    else
        return 0;
}

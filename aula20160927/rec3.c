#include <stdio.h>

int triangulo_pascal(int a,int n);
int main(){
    int a,n;
    printf("Digite o numero total de bolas: ");
    scanf("%d", &a);
    printf("Digite quantas pretende retirar: ");
    scanf("%d", &n);
    printf("Combinacoes possiveis: %d", triangulo_pascal(a,n));
    return 0;
}
int triangulo_pascal(int a,int n){
    return (n == 0)? 1 : (a*triangulo_pascal(a-1,n-1))/n;
}


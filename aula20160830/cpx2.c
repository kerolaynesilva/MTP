#include <stdio.h>
#include <complex.h>
int main(){
    double complex Z1,Z2,produto;
    double R_Z1, I_Z1;
    printf("Digite a parte real Z1: ");
    scanf("%lf", &R_Z1);
    printf("Digite a parte imaginaria Z1: ");
    scanf("%lf", &I_Z1);
    Z1 = R_Z1 + I_Z1*I;
    Z2 = conj(Z1);
    produto = Z1*Z2;
    printf("Conjugado: %lf + %lf*i\n",creal(Z2),cimag(Z2));
    printf("Produto de Z1 pelo seu conjugado: %lf + %lf*i\n",creal(produto),cimag(produto));
    return 0;
}

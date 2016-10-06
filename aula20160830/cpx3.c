#include <stdio.h>
#include <complex.h>
#include <math.h>
#define pi 3.1415
int main(){
    double complex Z1,Z2,raiz,raiz1,raiz2;
    double R_Z1, I_Z1,k1,k2,angulo;
    printf("Digite a parte real Z1: ");
    scanf("%lf", &R_Z1);
    printf("Digite a parte imaginaria Z1: ");
    scanf("%lf", &I_Z1);
    Z1 = R_Z1 + I_Z1*I;
    raiz = sqrt(pow(R_Z1,2)+pow(I_Z1,2));
    k1 = I_Z1/raiz;
    k2 = R_Z1/raiz;
    angulo = acos(k2)*pi/180;
    raiz1 = sqrt(raiz)*(cos(angulo/2+k1*pi)+sin(angulo/2+k1*pi)*I);
    raiz2 = sqrt(raiz)*(cos(angulo/2+k2*pi)+sin(angulo/2+k2*pi)*I);
    printf("Raiz1: %lf + %lf*i\n",creal(raiz1),cimag(raiz1));
    printf("Raiz2: %lf + %lf*i\n",creal(raiz2),cimag(raiz2));
    return 0;
}

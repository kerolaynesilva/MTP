#include <stdio.h>
#include <math.h>
#include <complex.h>
void delta(float a,float b,float c);

int main(){
    float a,b,c;
    printf("Digite os coeficientes a,b,c da equacao: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    delta(a,b,c);
    return 0;
}

void delta(float a,float b,float c){
    float delta, raiz1,raiz2;
    double complex Z1,Z2;
    delta = b*b - 4*a*c;
    if(delta > 0){
       raiz1 = (-b + sqrt(delta))/(2*a);
       raiz2 = (-b - sqrt(delta))/(2*a);
       printf("Raizes: %.2f e %.2f \n", raiz1,raiz2);
    }
    if(delta == 0){
        printf("Raizes = %.2f \n", -b/(2*a));
    }
    if(delta < 0){
        Z1 = -b/(2*a) + I* sqrt(-delta)/(2*a);
        Z2 = -b/(2*a) - I* sqrt(-delta)/(2*a);
        printf("Raizes:  %lf + %lf*i e %lf + %lf*i \n", creal(Z1),cimag(Z1),creal(Z2),cimag(Z2));
    }
}

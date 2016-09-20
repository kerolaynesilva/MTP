#include <stdio.h>
#include <math.h>

void delta(float a,float b,float c);

int main(){
    float a,b,c;
    printf("Digite os coeficientes a,b,c da equacao: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    void delta(float a,float b,float c);
    return 0;
}

void delta(float a,float b,float c){
    float delta, raiz1,raiz2;
    char I = 'i';
    delta = b*b - 4*a*c;
    if(delta > 0){
       raiz1 = (-b + sqrt(delta))/(2*a);
       raiz2 = (-b - sqrt(delta))/(2*a);
       printf("Raizes: %d e %d", raiz1,raiz2);
    }
    if(delta = 0){
        raiz1 = -b/(2*a);
        printf("Raiz: %d ", raiz1);
    }
    else{
        raiz1 = -b/(2*a) + I* sqrt(-delta)/(2*a);
        raiz2 = -b/(2*a) - I* sqrt(-delta)/(2*a);
        printf("Raizes: %d e %d", raiz1,raiz2);
    }
}


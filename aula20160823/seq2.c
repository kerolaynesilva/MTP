#include<stdio.h>
int main (){
    float altura_triangulo,base_triangulo,area;
    printf("Favor entrar com a altura do triangulo: ");
    scanf("%f",&altura_triangulo);
    printf("Favor entrar com a base do triangulo: ");
    scanf("%f",&base_triangulo);
    area=(altura_triangulo*base_triangulo)/2;
    printf("A area do triangulo e: %f",area);
    return 0;
}


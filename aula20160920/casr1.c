#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sortear(int num);

int main(){
    srand(time(0));
    int num;
    printf("Digite um numero entre 1 e 10: ");
    scanf("%d", &num);
    sortear(num);
    return 0;
}

void sortear(int num){
    int i,valor;
    for(i = 1; i <= 10; i++){
       valor = rand()%10 + 1;
    }
    if(num == valor)
        printf("Parabens seu numero foi sorteado!\n");
        else
            printf("Numero sorteado: %d", valor);
}

#include <stdio.h>
#define MOSTRABOOL(x) ({printf("%s\n", (x)? "Verdadeiro":"Falso");})
typedef enum{false = 0, true = 1} bool;

int main(){
    bool V = true;
    bool F = false;
    switch(V){
        case true:
            MOSTRABOOL(V);
            break;
        case false:
            MOSTRABOOL(F); //nao precisa colocar break, pois nao tem mais nada depois
            }
    MOSTRABOOL(2 > 3);
    MOSTRABOOL(2 < 3);
    MOSTRABOOL(2 == 3);
    MOSTRABOOL(2 != 3);
    MOSTRABOOL(2 <= 3);
    MOSTRABOOL(2 >=3);
    return 0;
}


#include <stdio.h> /* pilha de int */

typedef struct Pilha_{
    int idtopo;
    int * dado;
} Pilha;

void push(Pilha * pilha, int dado);
void pop(Pilha * pilha);
char top(Pilha pilha);
int empty(Pilha pilha);

int main(){
    Pilha pilha;
    int i;
    pilha.idtopo = -1;
    pilha.dado = NULL;
    for(i = 0; i < 10; i ++){
        printf("%d", i);
        push(&pilha, i);
    }
    printf("\n");
    while(!empty(pilha)){
        printf("%d", top(pilha));
        pop(&pilha);
    }
    return 0;
}
void push(Pilha * pilha, int dado){
    (*pilha).idtopo ++;
    if((*pilha).dado == NULL)
        (*pilha).dado = (int*) malloc(sizeof(int));
    else
        (*pilha).dado = (int*) realloc((*pilha).dado, (*pilha).idtopo*sizeof(int));
    (*pilha).dado[(*pilha).idtopo] = dado;
}

void pop(Pilha * pilha){
    if((*pilha).idtopo - 1 >= -1){
        (*pilha).idtopo--;
        if((*pilha).idtopo == -1)
          (*pilha).dado = NULL;
        else
          (*pilha).dado = (int*) realloc((*pilha).dado, (*pilha).idtopo*sizeof(int));
}
}
char top(Pilha pilha){
    return pilha.dado[pilha.idtopo];
}

int empty(Pilha pilha){
    return (pilha.idtopo == -1);
}

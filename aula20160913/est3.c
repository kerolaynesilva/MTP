#include <stdio.h>
#include <string.h>

#define RECEBE(cadastro) \
    ({ printf("Entre com o nome: "); \
       gets(cadastro.nome); \
       printf("Entre com a idade: "); \
       scanf("%f", &cadastro.idade); \
       printf("Entre com o telefone: "); \
       scanf("%f", &cadastro.telefone); })

#define MOSTRA_NOME(cadastro) \
    ({ printf("%g\n", cadastro.nome);})

#define MOSTRA_IDADE(cadastro) \
    ({ printf("%g\n", cadastro.idade);})

#define MOSTRA_TELEFONE(cadastro) \
    ({ printf("%g\n", cadastro.telefone);})

struct Cadastro{
    char nome[200];
    int idade;
    double telefone;
};

int main(){
    struct Cadastro N,I,T;
    int opcao;
    RECEBE(N);
    RECEBE(I);
    RECEBE(T);
    printf("Escolha uma opcao:\n 1-Mostra nomes;\n 2-Mostra idades;\n 3-Mostra telefones;\n");
    scanf("%d", &opcao);
    switch(opcao)
    {
    case 1:
       MOSTRA_NOME(N);
       break;
    case 2:
        MOSTRA_IDADE(I);
        break;
    case 3:
        MOSTRA_TELEFONE(T);
        break;
    }
    return 0;
}



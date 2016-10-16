#include <stdio.h>
#include <stdlib.h>

struct Dados{
    char nome[30];
    int idade;
};
char * inicializaNome(struct Dados *cadastro);
struct Dados incluirNome(struct Dados *cadastro);
struct Dados incluirIdade(struct Dados *cadastro);

int main(){
    int opcao;
    struct Dados *cadastro;
    char * texto;
    cadastro = (struct Dados*)malloc(sizeof(struct Dados));
    do{
    printf("Escolha uma opcao: \n1-Incluir dados;\n2-Excluir dados;\n3-SAIR!\n");
    scanf("%d",&opcao);
    switch(opcao){
    case 1:{
        texto = inicializaNome(cadastro);
        printf("Entre com o seu nome (entre com '#'+ENTER para sair):\n");
        texto = recebeTexto(texto);
        incluirNome(cadastro);
        pritnf("Entre com a idade (Entre com '#'+ENTER para sair):\n ", incluirIdade(cadastro));
        break;
        }
    case 2:
        break;
    }
    }while(opcao != 3);
    return 0;
}
char * inicializaNome(struct Dados * cadastro){
    char * texto;
    texto = (char *) malloc(sizeof(char));
    texto [0] = '\0';
    return texto;
}

struct Dados incluirNome(struct Dados *cadastro){
char c;
int tamanho = 0;
    do{
        c = getchar();
        if(c != '#'){
            tamanho ++;
            cadastro->nome = (char *)realloc(cadastro.nome,(tamanho+1)*sizeof(char));
            cadastro->nome[tamanho] = '\0';
            cadastro->nome[tamanho-1] = c;
        }
    }while (c != '#');
    return cadastro.nome;
}
struct Dados incluirIdade(struct Dados *cadastro){
char c;
do{
    c = getchar();
    if(c != '#')
        cadastro.idade = (int *)realloc(cadastro.idade,4*sizeof(int));
}while(c != '#');
return cadastro.idade;
}

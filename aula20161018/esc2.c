#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void receberDados(int dados,int * vet);
void gravaArq(char * filename);
void recuperarDados(int dados, int * vet,char * filename);

int main(){
    srand(time(0));
    int dados;
    int * vet = (int *)malloc(dados*sizeof(int));
    char nomearq[256];
    printf("Nome do arquivo: ");
    scanf("%s", nomearq);
    gravaArq(nomearq);
    printf("Entre com o numero de dados: ");
    fscanf(stdin, "%d", &dados);
    receberDados(dados,vet);
    recuperarDados(dados,vet,nomearq);
    return 0;
}
void receberDados(int dados,int * vet){
    FILE * arquivo;
    int i;
    for(i = 0; i < dados; i ++){
          vet[i] = rand()%dados-1;
          fprintf(arquivo,"%d\n",vet[i]);
    }
    fclose(arquivo);
}
void gravaArq(char * filename){
    FILE * arquivo;
    arquivo = fopen(filename,"w");
    fprintf(arquivo, "Funcionou!\n");
    fclose(arquivo);
}
void recuperarDados(int dados, int * vet,char * filename){
    FILE * arquivo;
    int i;
    arquivo = fopen(filename,"r");
    if(arquivo == NULL)
        fprintf(stderr, "Arquivo nao existente!\n");
    else{
    fscanf(arquivo,"%d\n", vet);
    fclose(arquivo);
    printf("Numeros selecionados:\n");
    for(i = 0; i < dados; i ++)
        fprintf(stdout,"%d\n",vet[i]);
    }
}


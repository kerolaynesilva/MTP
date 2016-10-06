#include <stdio.h>
#define N 1000
int n;
struct cadastro{
    char nome[100];
    int idade;
    int telefone;
    };
struct cadastro vetor[50];
void cadastrar()
{
   int i;
	for(i = 0 ; i < n ; i++)
	{
		printf("\nCadastrando");
		printf ("Nome:\n");
		fflush(stdin);
		gets(vetor[i].nome);
		printf("Idade:\n");
		scanf("%d", &vetor[i].idade);
		printf("Telefone:\n");
		scanf("%d", &vetor[i].telefone);
}
}
void nomes ()
{
printf("Nomes cadastrados:\n");
int i;
	for(i = 0 ; i < n ; i++)
printf("%s\n", vetor[i].nome);
}
void idades ()
{
    int i=0;
printf("Idades cadastrados:\n");
	for(i = 0 ; i < n ; i++)
printf("%d\n", vetor[i].idade);
}
void telefones ()
{
    int i;
printf("Telefones cadastrados:\n");
	for(i = 0 ; i < n ; i++)
printf("%d\n", vetor[i].telefone);
}
int main (){
    int opcao;
    printf("Digite o numero de pessoas que devem ser cadastradas:\n");
	scanf("%d", &n);
    do {
    printf("Escolha o que deseja fazer:\n");
    printf("1 - Cadastrar pessoas.\n");
    printf("2 - Lista todos os nomes cadastrados.\n");
    printf("3 - Lista todas as idades cadastradas.\n");
    printf("4 - Lista todos os telefones cadastradas.\n");
    printf("5 - Sair do programa\n");
    scanf("%d", &opcao);
switch (opcao)
{
        case 1:
            cadastrar();
            break;
        case 2:
           nomes ();
           break;
        case 3:
           idades ();
           break;
        case 4:
            telefones ();
            break;
}
    }while(opcao!=5);


return 0;}

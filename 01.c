#include <stdio.h>
#include <string.h>

int rg[100];
char nome[100][50];

// função que cadastra uma pessoa na lista na posição do parâmetro (posicao)
void Cadastrar(int p){
    printf("digite o seu nome: \n");
    scanf("%s", &nome[p]);
    printf("digite o seu rg:\n");
    scanf("%d", &rg[p]);
}

// função que retorna o nome da pessoa usando o rg como parâmetro
int PesquisarPorRg(int rgParametro){
    for ( int contador=0 ; contador<100 ; contador++)
    {
        if ( rg[contador] == rgParametro ){
            printf("\nO nome da pessoa com este RG eh: %s \n", nome[contador]);
            return 0;
            
        }
    return printf("Usuario nao encontrado. \n");
    }
}

int main(){
    // variáveis de Escolha do switch e do rgParâmetro que vai ser ultilizado na função de pesquisar
    int choose, rgp;
    // posição que vai ficar o usuário cadastrado
    int posicao = 1;

    do {
    printf("Escolha uma das opcoes:\n1- Cadastrar usuario\n2- Pesquisar usuario\n");
    scanf("%d", &choose);
    switch (choose) {
        case 1:
            Cadastrar(posicao);
            posicao =+ 1 ;
            break;
        case 2:
            printf("Digite o Rg da pessoa que deseja encontrar: \n");
            scanf("%d", &rgp);
            PesquisarPorRg(rgp);
            break;
        default:
            printf("Programa encerrado...");
            break;
    }
    } while ( choose != 0 || choose > 2 );

    return 0;
}
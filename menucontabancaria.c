/* Programa 2 */
/* Função: Menu conta bancaria */
// Autor: João Hugo Soares de Campos

#include<stdio.h>
#include<stdlib.h>

typedef struct{ char nome[30]; int numConta; float saldo; }stContaCliente;

int main (int argc, char *argv[]){

    int escolha, i, menorsaldo, limite;
    char nomecliente[30];
    limite = 15;
    stContaCliente registro [limite];

    while (escolha != 4){
    printf(" \n Escolha a opcao: ");
    printf(" \n 1. Cadastrar conta" );
    printf(" \n 2. Visualizar todas as contas de um determinado cliente" );
    printf(" \n 3. Excluir conta com menor saldo" );
    printf(" \n 4. Para sair. \n " );
    printf(" \n Digite a opcao desejada: ");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
            printf("\nCadastrar contas\n \n");
            for (i=0; i<limite; i++)
            {
                int j = i+1;
                printf("%d - Digite o Nome: ", j);
                scanf("%s", &registro[i].nome);
                printf("%d - Digite o saldo da conta: ", j);
                scanf("%f", &registro[i].saldo);
                registro[i].numConta = rand() % 1000;
                printf("%d - Numero da conta: %d\n \n", j, registro[i].numConta);
            }
            break;

        case 2:
            printf("\nVisualizar todas as contas de um determinado cliente\n \n");
            printf ("Nome do cliente: ");
            scanf ("%s", &nomecliente);

            for (i=0; i<limite; i++)
            {
                if (strcmp(nomecliente, registro[i].nome) == 0){
                    printf("Numero conta: %d\n", registro[i].numConta);
                    printf("Saldo conta: %.02f\n", registro[i].saldo);
                }
            }
            break;

        case 3:
            menorsaldo = registro[0].saldo;

            for (i=0; i<limite; i++){
                if (menorsaldo > registro[i].saldo){
                    menorsaldo = registro[i].saldo;
                }
            }
            for (i=0;i<limite; i++){
                if (menorsaldo == registro[i].saldo){
                    registro[i] = registro[limite-1];
                    registro[limite - 1] = registro[i];
                    limite--;
                }
            }
            break;
        }
    }

    return 0;
}

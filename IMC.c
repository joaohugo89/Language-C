/* Programa 1 */
/* Função: IMC */
// Autor: João Hugo Soares de Campos

#include<stdio.h>

typedef struct{ char nome[30], sexo[1]; int cpf; float altura, peso;} stDadosPessoa;

int main( int argc, char *argv[]){

    stDadosPessoa registro[30];
    int procura, i, resultado;

    printf("Registro: Nome, CPF, Altura e Peso\n");
    for (int i=0; i<30; i++)
    {
        int j = i+1;
        printf("%d - Digite o Nome: ", j);
        scanf("%s", registro[i].nome);
        printf("%d - Digite o CPF (apenas numeros): ", j);
        scanf("%d", &registro[i].cpf);
        printf("%d - Digite a Altura (em metros): ", j);
        scanf("%f", &registro[i].altura);
        printf("%d - Digite o Peso (em kilogramas): ", j);
        scanf("%f", &registro[i].peso);
    }

    printf("CPF: ");
    scanf("%d", &procura);

    for (i=0; i<30; i++){
        if (registro[i].cpf = procura){
            resultado = registro[i].peso / (registro[i].altura * registro[i].altura);
            printf("%d",resultado);
        }
    }

    return 0;
    }


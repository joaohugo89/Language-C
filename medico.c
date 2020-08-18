/* Programa 2 */
/* Função: Informações ficha médica */
// Autor: João Hugo Soares de Campos

#include<stdio.h>
#include<stdlib.h>

typedef struct{ char nome[30], sexo[1]; int idade; float altura, peso;}stPaciente;

float pesoIdeal(float a, char sexo[2])
{
    if (strcmp(sexo, "m") == 0){
        return (72.7 * a) - 58;
    }
    else{
        return (62.1 * a) - 44.7;
    }
}

int main (int argc, char *argv[]){

    int i, limite, num;
    float menorpeso, pesoideal, diferenca;
    limite = 1;
    stPaciente registro [limite];

    for (int i=0; i<limite; i++)
        {
            int j = i+1;
            printf("\n%d - Digite o Nome: ", j);
            scanf("%s", registro[i].nome);
            printf("%d - Digite o sexo do paciente [H] ou [M]: ", j);
            scanf("%s", registro[i].sexo);
            printf("%d - Digite a idade do paciente: ", j);
            scanf("%d", &registro[i].idade);
            printf("%d - Digite a altura do paciente: ", j);
            scanf("%f", &registro[i].altura);
            printf("%d - Digite a peso do paciente: ", j);
            scanf("%f", &registro[i].peso);
        }

    menorpeso = registro[0].peso;

    for (i=0; i<limite; i++){
        if (menorpeso > registro[i].peso){
            menorpeso = registro[i].peso;
            num = i;
        }
    }

    printf("Nome: %s\n", registro[num].nome);

    for (i=0; i<limite; i++){
        pesoideal = pesoIdeal(registro[i].altura, registro[i].sexo);
        if (registro[i].peso > pesoideal){
            diferenca = registro[i].peso - pesoideal;
            printf("Nome: %s\n", registro[i].nome);
            printf("Idade: %d\n", registro[i].idade);
            printf("Perder peso: %f\n", diferenca);
        }

        if (registro[i].peso < pesoideal){
            diferenca = pesoideal - registro[i].peso;
            printf("Nome: %s\n", registro[i].nome);
            printf("Idade: %d\n", registro[i].idade);
            printf("Ganhar peso: %f\n", diferenca);
        }
    }
    return 0;
}

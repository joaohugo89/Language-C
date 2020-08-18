/* Programa 2 */
/* Função: Contador de palavras em uma frase */
// Autor: João Hugo Soares de Campos

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
    char frase[256];
    char frasedobrada[512];
    char palavra[30];
    int tamanho, cont, contagem, i;

    printf ("Digite uma frase: ");
    fgets (frase, 256, stdin);

    tamanho = strlen(frase);
    cont = 0;
    contagem = 0;

    for (i = 0; i < tamanho; i++){
        if (frase[i] == ' ' & frase[i] != '\0' & frase[i] != '\n'){
            palavra[cont] = frase[i];
            cont++;
        }
        else{
            contagem++;
            cont = 0;
        }
    }

    printf("Numero de palavras: %d", contagem);

    return 0;
}

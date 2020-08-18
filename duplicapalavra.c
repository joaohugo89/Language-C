/* Programa 1 */
/* Função: Duplica palavras */
// Autor: João Hugo Soares de Campos

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
    char frase[256];
    char frasedobrada[512];
    char palavra[30];
    int tamanho, cont;

    printf ("Digite uma frase: ");
    fgets (frase, 256, stdin);

    tamanho = strlen(frase);
    cont = 0;

    for (int i = 0; i < tamanho; i++){
        if (frase[i] != ' ' & frase[i] != '\0' & frase[i] != '\n'){
            palavra[cont] = frase[i];
            cont++;
        }
        else{
            palavra[cont] = '\0';
            strcat(frasedobrada, palavra);
            strcat(frasedobrada, " ");
            strcat(frasedobrada, palavra);
            strcat(frasedobrada, " ");
            strcpy(palavra, "\0");
            cont = 0;
        }
    }

    puts(frasedobrada);

    return 0;
}

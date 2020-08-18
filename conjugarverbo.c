/* Programa 3 */
/* Função: Conjugar verbo terminado em "AR" */
// Autor: João Hugo Soares de Campos

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
    char palavra[30], palavranova[30];
    int caracteres;

    printf ("Digite uma palavra: ");
    scanf ("%s", &palavra);
    caracteres = strlen(palavra) - 2;

    strncpy(palavranova, palavra, caracteres);

    printf (" Eu %so \n",palavranova);
    printf (" Tu %sas \n",palavranova);
    printf (" Ele %sa \n",palavranova);
    printf (" Nos %samos \n",palavranova);
    printf (" Vos %sais \n",palavranova);
    printf (" Eles %sam \n",palavranova);

    return 0;
}


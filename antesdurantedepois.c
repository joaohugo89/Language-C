/* Programa 2 */
/* Função: Antes, Durante e Depois */
// Autor: João Hugo Soares de Campos

#include <stdio.h>

int main (int argc, char *argv[]){
    int num1, num2, num3;
    printf("Digite um numero: ");
    scanf ("%d", &num1);

    num2 = num1 - 1;
    num3 = num1 + 1;
    printf ("Numero Anterior: %d, Numero Digitado: %d, Numero Seguinte: %d", num2, num1, num3);

    return 0;
}
